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
		//������ǴӺ��������ǰִ�еģ�����ȵ��ú�����䡣
	cout << "ջ�Ƿ�Ϊ�գ�" << str_stack.empty() << " " <<
		"ջ��Ԫ��������" << str_stack.size() << " " <<
		"ջ��Ԫ���ǣ�" << str_stack.top() << endl;
	cout<<"����һ��Ԫ�أ�" << str_stack.pop() <<" "<<"ջ�Ƿ�Ϊ�գ�"<<
		str_stack.empty() << endl;

	cout << "˫�˶����Ƿ�Ϊ�գ�" << str_deque.empty() <<
		"˫�˶���Ԫ��������" << str_deque.size() <<
		"˫�˶���β��Ԫ���ǣ�" << str_deque[str_deque.size() - 1] << endl;
		

	cout << "�����Ƿ�Ϊ�գ�"<<str_queue.empty() << "������Ԫ�ظ�����"<<str_queue.size() << endl;
	while (!str_queue.empty())
	{
		cout<<"��ͷԪ��Ϊ��"<<str_queue.front();
		str_queue.pop();
	}
	return 1;
}