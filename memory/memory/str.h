#ifndef _STR_H_
#define _STR_H_
#include<initializer_list>
#include<vector>
#include<memory>
#include<string>
using namespace std;

class StrBlob;

class StrBlob {
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> i1);
	size_type size() { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	string& front();
	string& back();
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg)const;

};
#endif // !_STR_H

