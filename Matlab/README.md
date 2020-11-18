Matlab 学习文档

//Excel 文件读取方式
mpg_in = xlsread('mpg.xlsx');
//指定对应的行列，指定读取第三列数据
mpg_in(:,3);
//指定读取第三行的数据，如果读取行的时候，相应的列应该加上 ：号
mpg_in(3,:);

//xlsread 是数学软件 MATLAB 中读取 Excel 文件中数据的一个函数。即从当前程序所在文件夹里，按照函数中的参数指定的范围，从单元格开始读取文件，返回数据。
//从指定文件夹读取，比如说num=xlsread(‘data.xls’),即从当前程序所在文件夹里，从A1单元格开始读取，读取data.xls文件，把数据返回给num。
num = xlsread(‘filename’)


//选择所在的sheet，比如说’sheet1’。
num = xlsread(‘filename’,‘sheet’)

//所在的单元格范围，比如说range=‘A1:A8’。
num = xlsread(‘filename’, ‘range’)

//sheet和单元格范围同时限制。
//式中括号内的三项都要加单引号，filename顾名思义，就是要导入的Excel的文件名，注意加.xls或.xlsx就好，第二个sheet就是表格页名，
//第三个range是指要导入数据的范围，这个对Excel不熟练的话建议用MATLAB
//打开Excel表格，直接用鼠标选中要导入的数据，然后表格里会自动出现选中数据的范围（这个的确好用），写入range即可。
num = xlsread(‘filename’, ‘sheet’, ‘range’)

//把返回的数据与文本分开保存。
[num, txt]= xlsread(‘filename’, …)

//分开保存的同时，有把num和txt保存到raw里，形成一个单一变量。
//其中，num是数值型变量且为矩阵，txt是字符型变量且为细胞数组，raw既含数值型变量又含字符型变量，当然，raw是细胞数组。
[num, txt, raw] = xlsread(‘filename’, …)


//不清楚某种函数的使用方法，可以使用help 加对应的函数名称，如：
help xlsread


//MATLAB中(){}[]的使用方法
//[]叫中括号，它用来存储矩阵和向量
//表示生成一个两行三列的矩阵
a=[1 2 3;4 5 6]
//()用于读取数组的元素
a(1,2)
//而{}表示元细胞数组，里面可以存放不同类型的数据类型
//一行三列的元细胞数组
c={'china','earth',[1,2,3;4,5,6]}
//若使用c(1,1)则有
ans={'china'}
//使用c{1,1}则有
ans='china'
//方能读取元细胞数组中的数据
//生成一个两行三列的元细胞数组
A=cell(2,3)
//正确赋值方法为
A{1,2}='china'



