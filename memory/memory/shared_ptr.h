#ifndef _SHARED_PTR_H_
#define _SHARED_PTR_H_
#include<iostream>
#include<vector>
#include<memory>

using namespace std;

shared_ptr<vector<int>> shared_vec() {
	return make_shared<vector<int>>();
}

void shared_vec_int(istream &io, shared_ptr<vector<int>> m) {
	int j;
	while (io >> j)
		m->push_back(j);//m是个指针
	
}

void shared_printf() {
	auto ptr = shared_vec();//shared_ptr<int> p=vec();
	shared_vec_int(cin,ptr);
	for (auto i : *ptr)
		cout << i<<" ";//使用智能指针可以避免内存释放的工作，而且可以有效避免内存泄漏问题。
}
#endif // !_SHARED_PTR_H_
