#include<iostream>
#include"type_alias.h"


using namespace std;
typedef int Sales_num;//ʹ�����ͱ���
using Sm = Sales_num;//��������
typedef char* p;

int main() {
	Sales_num orange_num, apple_num;
	orange_num = 10, apple_num = 11;
	cout << orange_num << apple_num << endl;
	kind<int> color;
	Sm e = 0;
	const p ptr =0;//ptr��һ������ָ�룬ָ��char
	const char* str ;//str��һ��ָ�룬ָ��const char 
	cout << typeid(ptr).name()<<endl;
	cout << typeid(str).name() << endl;

	return 1;
}