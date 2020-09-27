# generic_exercise_demo
c++prime练习题

10.3.1向算法传递函数

谓词：是一个可调用的表达式，其返回结果是一个能用作条件的值。
标准库算法所使用的谓词分为两类：一元谓词（只接受单一参数unary predicate）和二元谓词（可以有两个参数binary predicate）
例如：
bool isShorter(const string &s1,const string &s2){
  return s1.size()<s2.size();
}
sort(word.begin(),word.end(),isShorter);//二元谓词，接受两个参数

排序算法：stable_sort 算法是一种稳定的排序算法，可以维持相等元素的原有顺序。

stable_sort();稳定排序，调用实参和sort()相似，但是可以保持原序列的顺序排序

partition()、stable_partition() 接受一个谓词，对容器内容进行划分，使得容器为true的值会排在容器的前半部分
，使得谓词为false会排在后半部分，算法会返回一个迭代器，指向最后一个使得谓词为true的元素后一个位置。（注意元素的引用）
stable_partition()是稳定划分版本。

find_if()接受一对迭代器查找第一个使得谓词返回非0值的元素的迭代器，如果不存在则返回尾后迭代器。

for_each()接受一对迭代器，并接受一个可调用的对象，对输入序列的每个元素调用此对象

transform()接受三个迭代器，前两个为输入序列，第三个为目的位置，对输入序列调用可调用对象，返回到目的位置。

10.3.2 lambda表达式

形式为：[](形参)->返回类型{} //[] 可以指定捕获值，捕获列表只用于局部非static变量，lambda可以直接使用局部static变量
可调用对象：函数、函数指针、重载函数调用运算符的类和lambda表达式。

10.3.3 lambda捕获与返回

当定义一个lambda时，编译器会生成一个与lambda对应的新的类类型，默认条件下，从lambda生成的类都包含
一个对应该lambda所捕获的变量的数据成员，lambda的数据成员也在lambda对象创建时被初始化。

值捕获；被捕获的变量在lambda创建时被拷贝，因此被捕获的值重新赋值时，不会影响对应的lambda值。

引用捕获：在lambda中使用引用捕获的变量时，实际上使用的时引用绑定的对象，因此重新赋值时，会影响
lambda的值。

当引用方式捕获变量时，必须保证lambda执行时，变量是存在。

隐式捕获：可以使用=、&表示是值捕获还是引用捕获。

如果使用混合捕获，则捕获方式必须不同。

可变lambda：如果希望改变一个被捕获的变量的值，就必须在参数列表首加上关键字mutable，
可以使函数体内的值捕获变量改变值（和引用捕获不同，出了函数体后无法改变）。

指定lambda返回类型：默认条件下，lambda体包含return之外任何语句，编译器假定lambda返回void
然后从函数体中推断出返回类型。

10.3.4 参数绑定
使用之前需要加上命名空间：using namespace placeholder;
标准库bind函数：auto newCallable =bind(callable,arg_list);
newCallable 可调用对象，callable 调用的函数，arg_list 初始化参数列表：_1表示第一个参数，_2表示第二个参数...
	bool check_size(const string &s,string::size_type sz){
	return s.size()>=sz;
	}
auto check6=bind(check_size,_1,6);
可以使用ref函数绑定引用参数：for_each(words.begin(),words.end(),bind(print,ref(os),_1,' '));


10.4 再探迭代器
标准库在_iterator定义了几种迭代器：
插入迭代器：绑定在容器，用于插入数据	back_inserter、front_inserter、inserter
流迭代器：绑定在输入输出流上，用来遍历关联的io流 istream_iterator ostream_iterator
反向迭代器：迭代器向后移动，除了forward_list的标准库都有反向迭代器
移动迭代器：移动元素
//只有在支持push_front才可以用front_inserter,支持push_back才可以用back_inserter

10.5 泛型算法结构
   迭代器类别：根据特定标准定出一种分类标准。
   输入迭代器：只读不写，单遍扫描，只能递增
   输出迭代器：只写不读，单遍扫描，只能递增
   前向迭代器：可读写，多遍扫描，只能递增
   双向迭代器：可读写，多遍扫描，可递增递减
   随机访问迭代器：可读写，多遍扫描，支持全部迭代器运算
   
   向输出迭代器写入数据的算法都假定目标空间足够容纳写入的数据。












习题：
10.11

10.12

10.13

10.14	auto num=[](int num1,int num2){return num1+num2;}
		

10.15	void add(int a){
			 auto sum =[a](int b){return a+b;};//捕获列表只用于局部非static变量，lambda可以直接使用局部static变量
			 //和在它函数之外声明的名字
		}
		
10.16 10.17 10.18 10.19

10.20	size_t sz1 = 6;
	auto count1=count_if(begin(words), end(words), [=](const string& str)->bool {return str.size() > sz1; });
	cout << count1<<endl;

10.21
	auto j = [sz1]()mutable -> bool {if (sz1 != 0) { --sz1; return sz1 == 0; } else return sz1 == 0; };
	for(int i=0;i<7;i++)
	cout << j()<<" ";
	
10.22

10.23 如果可调用对象的参数使x个，则可接受x+1个参数；

10.24 	vector<string> str={"sdcdddd","ssfdfew","abdcedfg","hello"};
		string s="pubclic";
		auto j=find_if(begin(str),end(str),bind(check_size,_1,s));//check_size(const string&s1,const string&s2){return s1.size()<s2.size();}
		cout<<*j;

10.25	

10.26	back_inserter()和push_back()基本相同
		front_inserter()和push_front()基本相同
		inserter()需要指定给定容器，以及给定容器的插入位置，与insert()操作基本相同

10.27	unique_copy(words.begin(),words.end(),back_inserter(i1));

10.28 	//123456789 123456789 987654321
		vector<int> i={1,2,3,4,5,6,7,8,9};
		vector<int> i1,i2,i3;
		copy(begin(i),end(i),inserter(i1,i1.begin()));
		copy(begin(i),end(i),back_inserter(i2));
		copy(begin(i),end(i),front_inserter(i3));
		
10.29

10.30

10.31

10.32

10.34

10.35

10.36

10.37

10.38	输入迭代器：只读不写，单遍扫描，只能递增
		输出迭代器：只写不读，单遍扫描，只能递增
		前向迭代器：可读写，多遍扫描，只能递增
		双向迭代器：可读写，多遍扫描，可递增递减
		随机访问迭代器：可读写，多遍扫描，支持全部迭代器运算
		
10.39
		双向迭代器，随机访问迭代器：可读写，多遍扫描，支持全部迭代器运算

10.40
		copy前两个参数需要读取数据，所以至少输入迭代器，第三个参数写入数据至少输出迭代器。
		reverse要反向处理序列，因此两个参数至少是双向迭代器。
		unique顺序扫描元素，覆盖重复元素，至少是前向迭代器。
10.41	
		将容器中老值替换成新值
		将满足谓词的值替换成新值
		将容器中的老值替换成新值，并拷贝到dest中
		将满足谓词的老值替换成新值，并拷贝到目标序列中
		
10.42	words.unique()//list版本直接消除重复元素list




		
