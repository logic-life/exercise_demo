#ifndef _FUNCTION_H_
#define _FUNCTION_H_
#include<cctype>
#include<string>
#include<map>
#include<set>

using namespace std;

string& trans(string& str) {
	for (size_t i = 0; i < str.size(); i++) {
		str[i] = tolower(str[i]);//大写字母则返回小写，小写保持不变
	 if (str[i] == ',' || str[i] == '.')
			str.erase(i, 1);
	}
	return str;
		


}

void add_family(map<string, vector<string>> &families, const string & family) {

	if (families.find(family) == families.end())
		families[family]=vector<string>();
}
void add_child(map<string, vector<string>>&families, const string &family, const string &child) {
	families[family].push_back(child);

}

void add_vec_pair(vector<pair<string,int>> &vec_pa,const pair<string,int> &pa) {
	vec_pa.push_back(pa);

}

pair<string,int> add_pair(string& str,int i) {
	return make_pair(str, i);
}
#endif // !_FUNCTION_H_

