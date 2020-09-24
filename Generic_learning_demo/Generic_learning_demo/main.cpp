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
	vector<string> str = {"string1","string5","string3","string4","string3"};
	vector<Sales_data> vec_data(begin(str),end(str));
	/*for (int i = 0; i < 10; i++)
		vec_data.push_back(data);
*/
	stable_sort(vec_data.begin(),vec_data.end(),compareIsbn);
	auto end_unique = unique(vec_data.begin(), vec_data.end());

	vec_data.erase(end_unique, vec_data.end());
	for (auto k : vec_data)
		cout << k.isbn();
	return 1;
}