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

10.11

10.12
