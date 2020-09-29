关联容器

定义一个map必须指名关键字类型和指名类型；而定义一个set时，只需指名关键字类型。
初始化map时，必须提供关键字类型和值类型，将关键字-值对包围在花括号中：{key,value}

multimap和multisetset没有关键字限制，允许多个元素具有相同的关键字。

使用map时，如果直接执行例如family[str],如果map中已经存在str时，只会获取其中的变量，
但是如果map中不存在str时，则会为该关键字创建一个对象，进行默认初始化。

传给排序算法的可调用对象必须满足与关联容器中关键字一样的类型要求。


/*************************************exercise****************************************/
//11.1：
map是关键字-值对的集合。例如：可以使用一个人的名字作为关键字，将其电话号码
作为值。而vector是向量，可以通过指定位置访问存在向量中的元素。

//11.2
list:主要用在元素经常写入的场合
vector:主要用在元素可以随机读取
deque:若需要在头部或者尾部添加或者删除元素，则deque是最好的选择。
map：适合按照对象的特征进行查询数据
set:通常是满足或者不满足某种要求的值的集合。

//11.3

//11.4

//11.5
map：是关键字-值对，且一一对应，而set只有关键字，如果需要通过某种元素寻找对应的值使用
map，而判断关键字是不是存在某些区域中，使用set.

//11.6
如果只需要顺序访问这些元素，或是按位置访问元素，那么应使用list。
如果需要快速判定是由有元素等于给定值，则应使用set。

//11.7
如果使用set保存不重复的单词，需要利用find查找读入的单词是否已经存在vector中，
如果不存在，才将单词加入vector中，而使用set，检查是否重复的工作是set模板提供的。
深层次差别，vector是无序线性表，查找时间和size成线性关系，而set是用红黑树实现的，
花费的时间与size成对数关系。

//11.8

//11.9	map<string, list<int>> words;

//11.10
可以迭代器支持大小比较，所以可以定义；而list是由链表集成的，不支持大小比较，所以无法
定义。

//11.11
typedef bool （*p)(const Sales_data &1hs,const Sales_data &rhs){
return 1hs.isbn()<rhs.isbn();
}
multiset<Sales_data,compareIsbn> bookstore(compareIsbn);

//11.12

//11.13 pair<string,int> pair_int;
		pair<char,int> pair_char={'1',1};
		pair<int,string>pair_string(1,"void");
