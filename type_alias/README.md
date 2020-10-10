类型别名定义方法：
	关键字typedef： typedef double wages;
					typedef wages base,*P;
	别名声明：using SI=Sales_item; 
	注意以下写法:typedef char *pstring;
				const pstring cstr=0;//常量数据类型都需要初始化，cstr是一个指向char的常量指针
				const char *cstr1=0；//cstr1是一个指向const char 的指针。
				typedef typename container::value_type value_type//需要使用typename指定说明container::value_type
				//是一种嵌套类型，否则默认假定作用域运算符访问的的名字不是类型。
				参考：http://feihu.me/blog/2014/the-origin-and-usage-of-typename/