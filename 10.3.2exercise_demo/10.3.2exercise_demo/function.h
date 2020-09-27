#ifndef _FUNCTION_H_
#define _FUNCTION_H_
#include<vector>
#include<string>
#include <iostream>
#include<numeric>
#include<algorithm>
#include"Sales_data.h"
#include"functional"

using namespace std;
using namespace placeholders;

inline void add(int a) {
	auto sum = [a](int b) {return a + b; };//lambda
	cout << sum(1) << endl;
}

void biggles(vector<string> &words, vector<string>::size_type sz); 

inline void output(vector<string>&vec_str) {
	for (auto i : vec_str)
		cout << i;
	cout << endl;

}

void elimDumps(vector<string>&);

string make_plural(size_t t,const string &s1,const string &s2);

void Sales_data_sort( vector<Sales_data> &item);

void bigger(vector<string>&words,vector<string>::size_type sz);

bool check_size(const string& str1, const string& str2);

void shorter(vector<string>&words, vector<string>::size_type sz);

bool short_size(const string& str, vector<string>::size_type se);
#endif // !_FUNCTION_H

