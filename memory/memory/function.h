#ifndef _FUNCTION_H_
#define _FUNCTION_H_
#include<vector>
#include<iostream>
#include<fstream>
#include<new>
using namespace std;

vector<int> *vec() {


	/*auto *p = new vector<int>;//Ч��һ�������Ǹ����
	return p;*/
	return new(nothrow)vector<int>;

}

vector<int>* vec_int(istream &io,vector<int>*i) {
	int k;
	while (io >> k)
		i->push_back(k);
	return i;
}

void printf() {
	vector<int> *ptr = vec();
	vec_int(cin,ptr);
	for (auto m : *ptr)
		cout << m;
	delete ptr;
	
}

// new ����ʧ��ʱ���᷵��bad_alloc,�޷�ת��Ϊnullptr
//bool b() {
//	int *p = new int;
//	return p;
//}
//�����׳��쳣��������Ȼ�������ѡ���ж�ָ���Ƿ����ɳɹ�
bool b() {

	int *p = new(nothrow)int;
	return p;
}

#endif // !_FUNCTION_H_

