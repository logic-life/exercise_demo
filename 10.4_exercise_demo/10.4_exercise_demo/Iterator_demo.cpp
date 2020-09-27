#include"Iterator.h"


void book_programming(vector<Sales_data> &s_vec) {
	Sales_data total;
	Sales_data trans;
	if (s_vec.empty()) {
		cerr << "No data?" << endl;
	}
	else {
		auto i = s_vec.begin();
		

		while (i != s_vec.end()) {
			total = *i;
			auto r = find_if(i + 1, s_vec.end(), [total](const Sales_data&item) {return item.isbn() != total.isbn(); });
			cout << accumulate(i + 1, r, total) << endl;
			i = r;

		}
		//cout << total << endl;
	}
}

Sales_data::Sales_data(const Sales_data& item) {
	bookName = item.bookName;
	all_price = item.all_price;
}

Sales_data Sales_data::operator=(const Sales_data& item) {
	bookName = item.bookName;
	all_price = item.all_price;
	return item;
}

ostream& operator<<(ostream&os, const Sales_data &item) {
	return cout << item.isbn() << item.all_price;
}

istream& operator >> (istream& is, Sales_data& item) {
	is >> item.bookName >> item.all_price;
	return is;
}

Sales_data operator+(Sales_data& item1, Sales_data&item2) {
	Sales_data data;
	data.all_price = item1.all_price + item2.all_price;
	data.bookName = item1.bookName;
	return data;
}

bool is_odd(int i) {
	return (i % 2) == 1;
}