#ifndef _OPERATOR_H_
#include <iostream>
#include <string>

using namespace std;

class integer {
public:
	integer();
	integer(int a) :num(a) { cout << "��Ҳ�Ǹ����캯����"; };
	bool operator<(const integer&);
	int read()const;
private:
	int num;
};
integer::integer() { cout << "���Ǹ����캯����"; }

bool integer::operator<(const integer& i) {
	return this->num < i.num;

}

bool operator<(const integer& in1,const integer& in2) {
	return in1.read() < in2.read();//��¶��һ������this����
	//Ĭ������£�this��������ָ�����ͷǳ����汾�ĳ���ָ�룻
	//���磺��ʱthis������Ϊinteger *const,����this����ʽ�ĵ�����ȻҪ���س�ʼ��������ζ�Ų����ó�������ĵ�ַ��ʼ���ǳ��� ����ָ�룬���Ա���
}

template<class T>
int compare(const T&a,const T&b){//�����ơ�<��: û���ҵ����ܡ�const integer�����͵���������������(��û�пɽ��ܵ�ת��)	
//��Ϊ������õ�˫Ŀ������������������������Ա������������������������
	if (a < b)
		return 1;
	else
		return -1;

}
int integer::read()const {
	return num;
}
#endif // !_OPERATOR_H_
