#include<iostream>

using namespace std;

class A {
public:
	A() { cout << "A的构造函数1：" << endl; };//不允许写成A();是因为A的构造函数已将在主函数中被调用
	explicit A(int k) :i(k) { cout << "A的构造函数2：" << endl; }
	A(const A& );

private:
	int i;

};

class B :public A{
public:
	B() { cout << "B的构造函数1：" << endl; }
	explicit B( int n=0 ,int m=0) :j(n),A(m) { cout << "B的构造函数2:"<<endl; }//构造函数初始化时，如果前面的值内部赋值，则后面一定要赋值。
private:
	int j;

};
A::A(const A& arr) {
	cout << "A的拷贝构造函数" << endl;
}

int main() {
	A a(1);//直接初始化
	A b=a ;//调用拷贝构造函数
	//A b = 9;//错误，A中重载的构造函数加了explicit使得无法进行int到A类型的转换
	B c(2,1);//构造函数
	A d { 1 };//A的构造函数2
	A *e = &c;// 动态类型                 
	//A e = { 3 };
	//B d = 7;
	//int i = static_cast<int>(a);



	return 1;
}