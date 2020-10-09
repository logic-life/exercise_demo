#ifndef _CONNECTION_H_
#define _CONNECTION_H_
#include<iostream>
#include<memory>
using namespace std;
struct destination {};
struct connection {};

connection connect(destination *pd) {
	cout << "connecting to the destination!" << endl;
	return connection();
}

void disconnect(connection c) {
	cout << "close to the connection!" << endl;
}

void f(destination &d) {
	cout << "ֱ�ӹ���connect" << endl;
	connection c = connect(&d);
	//���ǵ���disconnect�ر�����
	disconnect(c);
	cout << endl;
}

void end_connect(connection *p) { disconnect(*p); }

void f1(destination &d) {
	cout <<"ʹ��shared_ptr����connect" << endl;
	connection c = connect(&d);
	shared_ptr<connection> p(&c, [](connection *p) {disconnect(*p); });
	//���ǵ���disconnect�ر�����
	cout << endl;
}
#endif // !_CONNECTION_H_

