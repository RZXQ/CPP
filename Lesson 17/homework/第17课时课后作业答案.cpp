/*
一：补全代码 
题目描述：小童是一家生产奶粉的工厂的工人，他的任务是挑出n袋奶粉中不足500g的奶粉，并输出，
最后再输出一共有多少袋奶粉不符合标准。
#include<iostream>
using namespace std;
int main(){
	int count=___(1)_____;//记录不合格奶粉的袋数 
	int n;
	cin>>n;
	int x; 
	//用for循环输入奶粉的克数并统计不合格的奶粉袋数
	for(int i=0;i<n;i++) {
		cin>>x;
		if(x<500){
			_____(2)______;
			cout<<x<<" ";
		}
	}
	cout<<endl;
	cout<<count; 
	return 0;
}
1.横线__(1)___处应该填写的代码是(     )
A -1    B 0     C 1      D 2
答案：B
解析：count在此处起到一个计数器的作用，在没开始计数之前要先置初值为0

2.横线__(2)___处应该填写的代码是(     )
A count--
B count=0
C count
D count++
答案：D
解析：此处是if判断语句的内容，当奶粉克数不足500时说明不合格，记录不合格奶粉数量的count的值加1

二：程序编写题

思路分析：假设一共有n袋奶粉，则程序可以循环n次，每次输入奶粉的克数并判断是否满足合格的要求，如果不合格直接用continue语句进行下一次循环否则计数器加1 
答案代码：

*/
#include<iostream>
using namespace std;
int main(){
	int n,m,a,count=0;//count计算合格奶粉的袋数 
	cin >> n;
	m=n;//将最开始的袋数存储在变量m中，因为下方进行while循环时n的值发生了变化 
	while(n--){
		cin >> a;
		if(a<500||a>550){
			cout << a << " ";
			continue;//如果不合格直接进行下一次循环 
		}
		count++;
	}
	cout << endl << double(count)/m*100<< "%";//进行while循环时n的值发生了变化，所以总袋数是m	

	return 0;
}
