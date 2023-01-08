/*
一：补全代码
题目描述：鹏鹏的班上一共有n个学生。刚好每个同学的身高互不相同。鹏鹏想知道，所有同学中身高第二高的是谁。
输入描述：输入共两行，第一行有一个整数 n（2≤n≤100），表示有 n 个学生。第二行有 n 个用空格分开的整数 a1，……， an，
依次表示每个同学的身高。ai 是不超过 200 的正整数。
输出描述：输出为两个整数，中间用空格隔开， 分别表示身高第二高的同学的编号和身高。

#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[100];
	int max1=0,max2=0;
	int index1=1,index2=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max1){
		    max2=max1;
			max1=arr[i];
			____(1)____ ;
			____(2)____ ;
		}else if(arr[i]>max2){
			max2=arr[i];
			index2 = i;
		}
	}
	cout<<index2<<' '<<max2;
	return 0;
}

1.横线(1)处应该填写的代码是(     )
A index2 = index1 B index1 = i  C index1 = index2  D i=index1
答案：

2.这段(2)代码的输出结果是(     )
A index2 = index1 B index1 = i  C index1 = index2  D i=index1
答案：

二：程序编写题

题目名称：找最小数
题目描述：输入一个n行m列的二维数组1<=n<=100,1<=m<=100，找出其中最小数，输出它的值以及其所在行号和列号。

样例输入：
3 3
3 5 7
8 10 4
12 2 6
样例输出：
2 3 2

*/
#include<iostream>
using namespace std;
int main(){

	return 0;
}
