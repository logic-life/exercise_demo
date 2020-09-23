#ifndef _STACK_H
#define _STACK_H
#include<iostream>
#include<string>
#include<deque>


using namespace std;
template <class T>
class stack {

public:
	unsigned k;
	stack() = default;//构造函数
	void push(const T &t) { deq.push_back(t); }
	T& top() { return deq.back(); }//返回栈顶元素
	T pop() {
		auto m = deq[size()-1];
		deq.pop_back();
		return m;
	}
	bool empty() { return deq.empty(); }
	size_t size() {return deq.size(); }

private:
	deque<T> deq;//设计模式,复合composition

};

//deque常见的函数：
//empty()若存储了元素，则返回true，否则false
//size()存储的最大元素数目
//c.max_size()最大存储元素数目
//a.swap(b)/swap(a,b)交换a,b元素
//push_back(t)在尾部添加一个元素，返回void
//emplace_back(args）尾部添加args创建的元素，返回void
//push_front(t)在头部添加元素t，返回void
//emplace_front(args)在头部添加args创建的元素，返回void
//insert(p,t)在迭代器p指向的元素之前创建一个t,返回指向新添加元素的迭代器
//insert(p,args)
//insert(p,n,t)在迭代器p指向的元素插入n个t的元素。返回指向的第一个元素的迭代器
//insert(p,b,e)
//insert(p,i1)
//back()返回尾元素的引用，若为空，函数行为未定义。
//front()返回首元素的引用，若为空，函数行为未定义。
//pop_back()删除尾元素，返回void
//pop_front()删除首元素，返回void
//erase(p)删除迭代器p指向的元素，返回指向被删除元素之后元素的迭代器
//erase(b,e)删除迭代器b到e间所有元素，返回最后被删之后元素的迭代器，如果e本身是尾后迭代器，函数也返回尾后迭代器
//clear()删除所有元素，返回void

#endif // !_ADAPTOR_H

