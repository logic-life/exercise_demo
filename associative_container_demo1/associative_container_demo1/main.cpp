#include<iostream>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<numeric>
#include<algorithm>
#include<vector>
#include<utility>
#include"function.h"

using namespace std;
int main(int argv,char *argr[]) {
	//vector<int> ivec;
	//for (vector<int>::size_type i = 0; i < 10; i++) {
	//	ivec.push_back(i);
	//	ivec.push_back(i);//因为push_back两次所以有20个元素
	//}
	//set<int> iset(ivec.cbegin(),ivec.cend());//不允许元素相同
	//multiset<int>miset(ivec.cbegin(),ivec.cend());
	//cout << ivec.size() << endl;
	//cout << iset.size() << endl;
	//cout << miset.size() << endl;
	/********************************************/
	//11.3
	//map<string,size_t> word_count;
	//set<string> exclude = {"."};
	//string word;
	////while (cin >> word)
	////	//if (exclude.find(word) == exclude.end())
	////	++word_count[word];
	////for (const auto &w : word_count)
	////	cout << w.first << " occurs " << w.second << ((w.second) > 1 ? " times " : " time ") << endl;

	//11.4
	//while (cin >> word) {
	//	trans(word);
	//	++word_count[word];
	//}
	//for (const auto &w : word_count)
	//cout << w.first << " occurs " << w.second << ((w.second) > 1 ? " times " : " time ") << endl;

	//11.7
	//map<string, vector<string>> families;
	//add_family(families,"family1");
	//add_child(families, "family1", "wu");
	//add_child(families, "family1", "zhang");
	//add_child(families, "family2", "zhang");
	//for (const auto &w : families)
	//{
	//	cout << w.first << " ";
	//	for (auto &i : w.second)
	//		cout << i;
	//	cout << endl;
	//}
	////11.8
	//vector<string> str;
	//string str_;
	//while (cin >> trans(str_))
	//{
	//	if (find(str.begin(), str.end(), str_) == str.end())
	//		str.push_back(str_);
	//}
	//for (auto k : str)
	//	cout << k << " ";
	//cout << endl;
	//return 1;
	//11.9
	map<string, list<int>> words;
	//11.12
	vector<pair<string,int>> vec_pair;
	string st;
	while (cin >> st)
	{
		add_vec_pair(vec_pair, add_pair(st, 8));
	}
	
	
}