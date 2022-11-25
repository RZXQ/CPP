/*一：补全代码。
题目名称：ASCII码转换
题目描述：输入一个ASCII码，输出对应的字符。
输入描述：一个整数，即字符的ASCII码，保证存在对应的可见字符。
输出描述：一行，包含相应的字符。
#include<iostream>
using namespace std;
int main(){
	
	int c;
	cin >> c;
	cout << _______ << endl;
	return 0;
}
横线处应填写的代码是：
答案：(char)c
解析：输入的是一个整型，输出它对应的字符，使用强制类型转换。

二：程序编写题。
思路分析：若求全班同学的平均分，需要知道全班同学的总成绩和全部学生人数即可。全班的学生人数(x+y),总成绩(87*x+85*y)
答案代码： */
#include<iostream>

using namespace std;

int main() {
    int x, y;
    cout << (87 * x + 85 * y) * 1.0 / (x + y) << endl;
    return 0;
}


