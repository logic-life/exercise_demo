#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include<iostream>
#include<string>

using namespace std;

class Sales_data {

public: 
	
	Sales_data()=default;

	Sales_data(string str=" ") :bookName(str) {}
	Sales_data(const Sales_data& item) :bookName(item.bookName) {}
	bool operator==(const Sales_data& it)const {//重载==运算符，否则无法调用unique的相等判断
		return it.bookName == this->bookName;
	}

	string isbn()const {
		return bookName;
	}
private:
	string bookName;


};

#endif // !_SALES_DATA_H

