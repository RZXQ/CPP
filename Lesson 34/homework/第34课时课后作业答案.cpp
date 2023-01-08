/* 
一：选择题
题目描述：判断字符串是否回文，回文是指顺读和倒读都一样的字符串。
题目描述：下列有关函数的说法正确的是（）
A 函数调用表达式的值由函数体内的cout语句决定
B 函数调用表达式的值由函数内部的return语句决定
C 函数中不可以有两个以上的参数 
D 函数结束的位置可以不用return语句

答案：B
解析：函数调用表达式的值由函数内部的return语句决定,函数中可以有两个以上的参数,函数结束的位置必须用return语句返回正确的值。

二：程序编写题
思路分析：这道题目考察的是字符串基于字典序的大小比较，使用if语句进行判断。可以自定义函数，作用就是比较四个数的大小，求出最小的。
答案代码：*/ 
#include<iostream>
using namespace std;
//创建函数，求最小值 
int Min(int a, int b, int c, int d){
	a = a < b ? a : b;
	a = a < c ? a : c;
	a = a < d ? a : d;
	return a;
}
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	//调用函数 
	int mmin = Min(a, b, c, d);
	cout << mmin << endl;
	return 0;
}


