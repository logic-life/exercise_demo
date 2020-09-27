#ifndef _SALES_DATA_H_
#define _SALES_DATA_H
#include<string>
#include<vector>

using namespace std;

class Sales_data
{
public:
	Sales_data(string &s) :bookName(s) {}
	string isbn()const {
		return bookName;
	}

private:
	string bookName;
};




#endif // !_SALES_DATA_H_

