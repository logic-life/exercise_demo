#include<iostream>

using namespace std;

class A {
public:
	A() { cout << "A�Ĺ��캯��1��" << endl; };//������д��A();����ΪA�Ĺ��캯���ѽ����������б�����
	explicit A(int k) :i(k) { cout << "A�Ĺ��캯��2��" << endl; }
	A(const A& );

private:
	int i;

};

class B :public A{
public:
	B() { cout << "B�Ĺ��캯��1��" << endl; }
	explicit B( int n=0 ,int m=0) :j(n),A(m) { cout << "B�Ĺ��캯��2:"<<endl; }//���캯����ʼ��ʱ�����ǰ���ֵ�ڲ���ֵ�������һ��Ҫ��ֵ��
private:
	int j;

};
A::A(const A& arr) {
	cout << "A�Ŀ������캯��" << endl;
}

int main() {
	A a(1);//ֱ�ӳ�ʼ��
	A b=a ;//���ÿ������캯��
	//A b = 9;//����A�����صĹ��캯������explicitʹ���޷�����int��A���͵�ת��
	B c(2,1);//���캯��
	A d { 1 };//A�Ĺ��캯��2
	A *e = &c;// ��̬����                 
	//A e = { 3 };
	//B d = 7;
	//int i = static_cast<int>(a);



	return 1;
}