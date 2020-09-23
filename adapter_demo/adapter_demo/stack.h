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
	stack() = default;//���캯��
	void push(const T &t) { deq.push_back(t); }
	T& top() { return deq.back(); }//����ջ��Ԫ��
	T pop() {
		auto m = deq[size()-1];
		deq.pop_back();
		return m;
	}
	bool empty() { return deq.empty(); }
	size_t size() {return deq.size(); }

private:
	deque<T> deq;//���ģʽ,����composition

};

//deque�����ĺ�����
//empty()���洢��Ԫ�أ��򷵻�true������false
//size()�洢�����Ԫ����Ŀ
//c.max_size()���洢Ԫ����Ŀ
//a.swap(b)/swap(a,b)����a,bԪ��
//push_back(t)��β�����һ��Ԫ�أ�����void
//emplace_back(args��β�����args������Ԫ�أ�����void
//push_front(t)��ͷ�����Ԫ��t������void
//emplace_front(args)��ͷ�����args������Ԫ�أ�����void
//insert(p,t)�ڵ�����pָ���Ԫ��֮ǰ����һ��t,����ָ�������Ԫ�صĵ�����
//insert(p,args)
//insert(p,n,t)�ڵ�����pָ���Ԫ�ز���n��t��Ԫ�ء�����ָ��ĵ�һ��Ԫ�صĵ�����
//insert(p,b,e)
//insert(p,i1)
//back()����βԪ�ص����ã���Ϊ�գ�������Ϊδ���塣
//front()������Ԫ�ص����ã���Ϊ�գ�������Ϊδ���塣
//pop_back()ɾ��βԪ�أ�����void
//pop_front()ɾ����Ԫ�أ�����void
//erase(p)ɾ��������pָ���Ԫ�أ�����ָ��ɾ��Ԫ��֮��Ԫ�صĵ�����
//erase(b,e)ɾ��������b��e������Ԫ�أ��������ɾ֮��Ԫ�صĵ����������e������β�������������Ҳ����β�������
//clear()ɾ������Ԫ�أ�����void

#endif // !_ADAPTOR_H

