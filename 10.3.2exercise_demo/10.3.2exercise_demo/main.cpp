#include<iostream>
#include<fstream>
#include"function.h"

using namespace std;


int main(int argc,char *argv[]) {
	vector<string> words = {"Nobody","really","cares","if","you","are","miserable","so","you",
	"might","as","well","be","happy"};
	//10.14
	auto f = [](int num1, int num2) ->int {return num1 + num2; };
	//10.15
	add(1);
	//10.16
	biggles(words, 4);
	//10.17
	//vector<Sales_data> item(begin(words),end(words));
	//Sales_data_sort(item);
	//for (auto i : item)
	//	cout << i.isbn()<<" ";
	//10.18¡¢10.19
	bigger(words, 4);

	//10.20
	size_t sz1 = 6;
	auto count1=count_if(begin(words), end(words), [=](const string& str)->bool {return str.size() > sz1; });
	cout << count1<<endl;

	//10.21
	auto j = [sz1]()mutable -> bool {if (sz1 != 0) { --sz1; return sz1 == 0; } else return sz1 == 0; };
	for(int i=0;i<7;i++)
	cout << j()<<" ";
	cout << endl;


	//10.22
	shorter(words,6);

	return 1;
	//10.29

}