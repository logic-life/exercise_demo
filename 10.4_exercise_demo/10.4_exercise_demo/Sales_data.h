#ifndef _SALES_DATA_H_
#define _SALES_DATA_H_
#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Sales_data {

public:
	friend ostream& operator<<(ostream&, const Sales_data &);//友元函数，重载<<
	friend istream& operator>> (istream&, Sales_data &);//友元函数，重载>>
	friend Sales_data operator+(Sales_data& item1, Sales_data&item2);//重载+
	Sales_data() {}//默认构造函数
	Sales_data::Sales_data(string &s, double d) :bookName(s), all_price(d) {}//初始化列表构造函数
	Sales_data(const Sales_data&);//拷贝构造函数
	Sales_data operator=(const Sales_data& ); // 拷贝赋值运算符
    string  isbn()const  { return bookName; }

private:
	string bookName;
	double all_price;
};




#endif // !_SALES_DATA_H_

