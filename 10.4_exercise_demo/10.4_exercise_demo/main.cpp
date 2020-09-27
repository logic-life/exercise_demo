#include"Iterator.h"
#include<list>
using namespace std;
ifstream input("input.txt");
ifstream i_input("i_input.txt");
ifstream s_input("s_input.txt");
ofstream _output1("1.txt");
ofstream _output2("2.txt");
int main() {
	//10.29
	/*istream_iterator<string> str_it(input),eof;
	vector<string> vec(str_it,eof);
	for (auto i : vec)
		cout << i<<" ";
	cout << endl;
	vector<int> num;
	ostream_iterator<int> out(cout," ");*/
	//10.30
	//istream_iterator<int> icin(cin),end;
	/*copy(icin, end, inserter(num,num.begin()));
	sort(num.begin(), num.end());
	copy(num.begin(),num.end(),out);*/
	//10.31
	/*copy(icin, end, back_inserter(num));
	sort(num.begin(), num.end());
	unique_copy(num.begin(),num.end(),out);*/
	//10.32
	//istream_iterator<Sales_data> scin(s_input), seof;
	//vector<Sales_data> s_vec(scin, seof);
	//book_programming(s_vec);
	//10.33
	//istream_iterator<int> is_int(i_input),end;
	//
	//ostream_iterator<int> output1(_output1," ");
	//ostream_iterator<int> output2(_output2," ");
	//partition_copy(is_int, end, output1, output2, is_odd );
	//10.34
	vector<string> st = { "string","void","stctic","main" };
	for (auto k = st.rbegin(); k != st.rend(); k++)
		cout << *k << endl;
	//10.35
	for (auto m = st.end() - 1; m != st.begin(); m--)
		cout << *m << endl;
	//10.36
	list<int> l = { 1,2,34,5,7,0,7,4 };
	auto k = find(l.rbegin(), l.rend(), 0);
	int p = 0;
	for (auto i = l.begin(); i != k.base(); p++, i++);
		cout << p<<endl;
	//10.37
	vector<int> vec_int = {1,2,3,4,5,6,7,8,9,10};
	list<int> list_int;
	vector<int>::reverse_iterator ai(vec_int.begin() + 2);
	vector<int>::reverse_iterator bi(vec_int.begin() + 6);
	copy(bi, ai, back_inserter(list_int));



		system("pause");
}