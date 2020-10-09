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
		m->push_back(j);//m�Ǹ�ָ��
	
}

void shared_printf() {
	auto ptr = shared_vec();//shared_ptr<int> p=vec();
	shared_vec_int(cin,ptr);
	for (auto i : *ptr)
		cout << i<<" ";//ʹ������ָ����Ա����ڴ��ͷŵĹ��������ҿ�����Ч�����ڴ�й©���⡣
}
#endif // !_SHARED_PTR_H_
