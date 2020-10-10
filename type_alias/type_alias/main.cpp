#include<iostream>
#include"type_alias.h"


using namespace std;
typedef int Sales_num;//使用类型别名
using Sm = Sales_num;//别名声明
typedef char* p;

int main() {
	Sales_num orange_num, apple_num;
	orange_num = 10, apple_num = 11;
	cout << orange_num << apple_num << endl;
	kind<int> color;
	Sm e = 0;
	const p ptr =0;//ptr是一个常量指针，指向char
	const char* str ;//str是一个指针，指向const char 
	cout << typeid(ptr).name()<<endl;
	cout << typeid(str).name() << endl;

	return 1;
}