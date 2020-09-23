#include<iostream>
#include<string>
#include"stack.h"
#include"queue.h"
#include<deque>

using namespace std;


int main() {
	stack<string> str_stack;
	deque<string> str_deque;
	queue<string> str_queue;

	string str[] = {"string1","string2","string3"};
	for(int i=0;i!=3;i++){
		str_deque.push_back(str[i]);
		str_stack.push(str[i]);
		str_queue.push(str[i]);

		
	}
		//输出流是从后面语句向前执行的，因此先调用后面语句。
	cout << "栈是否为空：" << str_stack.empty() << " " <<
		"栈内元素数量：" << str_stack.size() << " " <<
		"栈顶元素是：" << str_stack.top() << endl;
	cout<<"弹出一个元素：" << str_stack.pop() <<" "<<"栈是否为空："<<
		str_stack.empty() << endl;

	cout << "双端队列是否为空：" << str_deque.empty() <<
		"双端队列元素数量：" << str_deque.size() <<
		"双端队列尾部元素是：" << str_deque[str_deque.size() - 1] << endl;
		

	cout << "队列是否为空："<<str_queue.empty() << "队列中元素个数："<<str_queue.size() << endl;
	while (!str_queue.empty())
	{
		cout<<"队头元素为："<<str_queue.front();
		str_queue.pop();
	}
	return 1;
}