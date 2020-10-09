#ifndef _FUNCTION_H_
#define _FUNCTION_H_
#include<vector>
#include<iostream>
#include<fstream>
#include<new>
using namespace std;

vector<int> *vec() {


	/*auto *p = new vector<int>;//效果一样，但是更简洁
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

// new 分配失败时，会返回bad_alloc,无法转化为nullptr
//bool b() {
//	int *p = new int;
//	return p;
//}
//不会抛出异常，但是仍然不是最佳选择，判断指针是否生成成功
bool b() {

	int *p = new(nothrow)int;
	return p;
}

#endif // !_FUNCTION_H_

