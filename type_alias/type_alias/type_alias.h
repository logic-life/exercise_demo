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
	typedef typename kind::this_kind t_kind;//��Ҫtypename ָ��kind::this_kind��һ��Ƕ�����Ͷ����Ǿ�̬��Ա�������߾�̬��Ա�����������ָ����ᱻ��Ϊ�ǲ������͡�
	
private:
	t_kind k;


};

#endif // !_TYPE_ALIAS_H_

