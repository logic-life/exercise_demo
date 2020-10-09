#include"str.h"

StrBlob::StrBlob():data(make_shared<vector<string>>()) {}

StrBlob::StrBlob(initializer_list<string>i1) :data(make_shared<vector<string>>(i1)) {}

void StrBlob::check(size_type i,const string &msg)const  {
	if (i >= data->size())
		throw out_of_range(msg);

}

void StrBlob::pop_back() {
	check(0,"pop_back on the empty StrBlob");
	return data->pop_back();
}

string& StrBlob::front() {
	check(0,"front on the empty StrBlob");
	return data->front();
}

string& StrBlob::back() {
	check(0,"back on the empty StrBlob");
	return data->back();
}

