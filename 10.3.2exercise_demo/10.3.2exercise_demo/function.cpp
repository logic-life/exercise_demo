#include"function.h"





void biggles(vector<string> &words, vector<string>::size_type sz) {

	elimDumps(words);//字典序排列并去除重复元素
	//stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {return a.size() < b.size(); });//长度稳定排序
	stable_sort(words.begin(),words.end(),bind(check_size,_1,_2));
//获取第一个长度大于sz的元素迭代器
	auto long_than_sz = find_if(begin(words), end(words), [sz](const string& str) {return str.size() > sz; });
	auto count = words.end() - long_than_sz;
	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer " << endl;
	for_each(long_than_sz, words.end(), [](const string &s) {cout << s << " "; });
		cout << endl;



}

void elimDumps(vector<string>& vec) {
	sort(vec.begin(), vec.end());//字典序排列
	auto end_unique = unique(begin(vec),end(vec));//将不重复的单词排列在范围前部，返回指向不重复区域之后一个位置的迭代器
	vec.erase(end_unique,vec.end());//去除重复元素
}

string make_plural(size_t t,const string &s1,const string &s2) {
	return (t > 1)  ? s1+s2 : s1;

}

void Sales_data_sort( vector<Sales_data> &item) {
	sort(item.begin(), item.end(), [](const Sales_data &it1, const Sales_data &it2) {return it1.isbn().size() < it2.isbn().size(); });


}

void bigger(vector<string>&words, vector<string>::size_type sz) {//习题10.18、10.19
		elimDumps(words);//字典序排列并去除重复元素
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {return a.size() < b.size(); });//长度稳定排序
	//auto longer_than_sz = partition(begin(words), end(words), [sz](const string& str) {return str.size() > sz; });
	auto longer_than_sz = stable_partition(begin(words), end(words), [sz](const string& str) {return str.size() > sz; });
	auto count = longer_than_sz - words.begin();
	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer " << endl;
	cout << endl;
}

bool check_size(const string& str1, const string& str2) {
	return str1.size() < str2.size();
}

void shorter(vector<string>&words, vector<string>::size_type sz) {//习题10.25
	elimDumps(words);//字典序排列并去除重复元素
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {return a.size() < b.size(); });//长度稳定排序
																												 //auto longer_than_sz = partition(begin(words), end(words), [sz](const string& str) {return str.size() > sz; });
	auto shorter_than_sz = partition(begin(words), end(words), bind(short_size,_1,sz));
	auto count = shorter_than_sz - words.begin();
	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or shorter " << endl;
	cout << endl;
}

bool short_size(const string& str, vector<string>::size_type se) {
	return str.size() <= se;
}