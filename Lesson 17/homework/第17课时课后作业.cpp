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
			count++;
			cout<<x<<" ";
		}
	}
	cout<<endl;
	cout<<count; 
	return 0;
}
1.横线__(1)___处应该填写的代码是(     )
A -1    B 0     C 1      D 2
答案：

2.横线__(2)___处应该填写的代码是(     )
A count--
B count=0
C count
D count++
答案：

二：程序编写题

题目名称：质检员问题升级
题目描述：小童是一家生产奶粉的工厂的工人，他的任务是调出奶粉中不足500g的奶粉和超过550g的奶粉并输出，
最后在输出合格奶粉所占比例。


样例输入：
6
500 499 488 560 501 501
样例输出：
499 488 560 
50%

*/
#include<iostream>

using namespace std;

int main() {

    return 0;
}
