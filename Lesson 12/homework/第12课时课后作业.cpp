/*
一：补全代码 
题目描述：一个最简单的计算器，支持+, -, *, / 四种运算。仅需考虑输入输出为整数的情况，
数据和运算结果不会超过int表示的范围。
#include<iostream>
using namespace std;
int main(){
	int a,b;
	char c;
	cin>>a>>b>>c;
	switch(c){
		case '+':
			cout<<a+b<<endl;
			break; 
		case '-':
			cout<<a-b<<endl;
			break;
		case '*':
			cout<<a*b<<endl;
			break;
		case '/':
			if(_________){
				cout<<"除数不能为0!"<<endl;
			} 
			else{
				cout<<a/b<<endl;
			}
			break;
		default:
			cout<<"不合法的操作符!"<<endl;
	}
	return 0;
} 
1.横线处应该填写的代码是(     )
A a==0 B a==0||b==0  C b==0  D a==0&&b==0
答案：

2.若输入1  2  +，这段代码的输出结果是(     )
A -1
B 2
C 0
D 3 
答案：

二：程序编写题

题目名称：判断星期几
题目描述：已知2017年10月1日是星期日，输入任意一个整数代表十月份的一天，
   求这一天是星期几（比如输入5，就代表10月5日）。
输入描述：输入一行，包含一个整数n。（1 <= n <= 31）
输出描述：输出一行，表示这一天是星期几。
样例输入：
1
样例输出：
星期日

说明：1 <= n <= 31
*/
#include<iostream>

using namespace std;

int main() {

    return 0;
}
