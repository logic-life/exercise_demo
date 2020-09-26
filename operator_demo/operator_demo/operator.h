#ifndef _OPERATOR_H_
#include <iostream>
#include <string>

using namespace std;

class integer {
public:
	integer();
	integer(int a) :num(a) { cout << "这也是个构造函数！"; };
	bool operator<(const integer&);
	int read()const;
private:
	int num;
};
integer::integer() { cout << "这是个构造函数！"; }

bool integer::operator<(const integer& i) {
	return this->num < i.num;

}

bool operator<(const integer& in1,const integer& in2) {
	return in1.read() < in2.read();//暴露了一个问题this问题
	//默认情况下，this的类型是指向类型非常量版本的常量指针；
	//例如：此时this的类型为integer *const,尽管this是隐式的但是仍然要遵守初始化规则，意味着不能用常量对象的地址初始化非常量 常量指针，所以报错
}

template<class T>
int compare(const T&a,const T&b){//二进制“<”: 没有找到接受“const integer”类型的左操作数的运算符(或没有可接受的转换)	
//因为这里调用的双目运算符运算是两个参数，所以必须重载运算符包括两个参数
	if (a < b)
		return 1;
	else
		return -1;

}
int integer::read()const {
	return num;
}
#endif // !_OPERATOR_H_
