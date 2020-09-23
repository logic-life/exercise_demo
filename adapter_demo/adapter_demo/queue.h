#ifndef _QUEUE_H
#define _QUEUE_H
#include<iostream>
#include<string>
#include<deque>


template<class T>
class queue {//����
public:
	queue() = default;
	bool empty() { return deq.empty(); }
	size_t size() { return deq.size(); }
	void push(const T& t) { deq.push_back(t); }//��β���һ��Ԫ��
	void pop() { deq.pop_front(); }//��ͷ����һ��Ԫ��
	T & front() { return deq.front(); }//��ͷԪ��


private:
	deque<T> deq;




};




#endif // !_QUEUE_H
