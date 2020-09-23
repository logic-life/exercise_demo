#ifndef _QUEUE_H
#define _QUEUE_H
#include<iostream>
#include<string>
#include<deque>


template<class T>
class queue {//队列
public:
	queue() = default;
	bool empty() { return deq.empty(); }
	size_t size() { return deq.size(); }
	void push(const T& t) { deq.push_back(t); }//队尾添加一个元素
	void pop() { deq.pop_front(); }//队头弹出一个元素
	T & front() { return deq.front(); }//队头元素


private:
	deque<T> deq;




};




#endif // !_QUEUE_H
