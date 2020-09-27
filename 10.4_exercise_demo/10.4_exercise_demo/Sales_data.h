#ifndef _SALES_DATA_H_
#define _SALES_DATA_H_
#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Sales_data {

public:
	friend ostream& operator<<(ostream&, const Sales_data &);//��Ԫ����������<<
	friend istream& operator>> (istream&, Sales_data &);//��Ԫ����������>>
	friend Sales_data operator+(Sales_data& item1, Sales_data&item2);//����+
	Sales_data() {}//Ĭ�Ϲ��캯��
	Sales_data::Sales_data(string &s, double d) :bookName(s), all_price(d) {}//��ʼ���б��캯��
	Sales_data(const Sales_data&);//�������캯��
	Sales_data operator=(const Sales_data& ); // ������ֵ�����
    string  isbn()const  { return bookName; }

private:
	string bookName;
	double all_price;
};




#endif // !_SALES_DATA_H_

