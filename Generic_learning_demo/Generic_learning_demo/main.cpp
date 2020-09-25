#include<iostream>
#include<string>
#include<algorithm>
#include<numeric>
#include<vector>
#include"Sales_data.h"
#include"function.h"
using namespace std;

 
int main() {
	Sales_data data="ssr";
	vector<string> str = { "Nobody","really","cares","if","you","are","miserable","so","you",
		"might","as","well","be","happy","really" };
	vector<Sales_data> vec_data(begin(str),end(str));
	/*for (int i = 0; i < 10; i++)
		vec_data.push_back(data);
*/
	stable_sort(vec_data.begin(),vec_data.end(),compareIsbn);
	for (auto j : vec_data)
		cout << j.isbn()<<" ";

	auto end_unique = unique(vec_data.begin(), vec_data.end());
	//cout << (*end_unique).isbn();如果没有重复的元素，返回的是尾后迭代器不存在引用。
	vec_data.erase(end_unique, vec_data.end());
	cout << endl;
	for (auto k : vec_data)
		cout << k.isbn()<<" ";
	return 1;
}