#include<iostream>
#include"str.h"
#include"function.h"
#include"shared_ptr.h"
#include"connection.h"
using namespace std;

int main() {
	//StrBlob b1;
	//StrBlob b2 = {"string1","string2","string3"};
	//b1 = b2;
	//b2.push_back("string4");
	//cout << b1.size() << b2.size() << endl;
	////printf();
	//shared_printf();
	destination d;
	f(d);
	f1(d);

	unique_ptr<int> p(new int(9));
	unique_ptr<int> k(p.release());//release���Խ��ָ��Ŀ���Ȩ�����ҽ�ָ����Ϊnullptr     

	return 1;
}