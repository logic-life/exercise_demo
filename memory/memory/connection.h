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
	cout << "直接管理connect" << endl;
	connection c = connect(&d);
	//忘记调用disconnect关闭连接
	disconnect(c);
	cout << endl;
}

void end_connect(connection *p) { disconnect(*p); }

void f1(destination &d) {
	cout <<"使用shared_ptr管理connect" << endl;
	connection c = connect(&d);
	shared_ptr<connection> p(&c, [](connection *p) {disconnect(*p); });
	//忘记调用disconnect关闭连接
	cout << endl;
}
#endif // !_CONNECTION_H_

