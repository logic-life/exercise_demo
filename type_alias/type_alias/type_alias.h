#ifndef _TYPE_ALIAS_H_
#define _TYPE_ALIAS_H_

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

template<typename T>
class kind {

public:
	kind(T a) :k(a) {};
	kind() {};
	typedef T this_kind;
	typedef typename kind::this_kind t_kind;//需要typename 指名kind::this_kind是一个嵌套类型而不是静态成员函数或者静态成员变量，如果不指定则会被认为是不是类型。
	
private:
	t_kind k;


};

#endif // !_TYPE_ALIAS_H_

