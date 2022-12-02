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
答案：C
解析，此if语句是用来判断除数是否为零，通过下方输出a/b的代码可以判断b为除数，所以此处要判断b是否为零

2.若输入1  2  +，这段代码的输出结果是(     )
A -1
B 2
C 0
D 3 
答案：D
解析：输入的操作符是加号，执行程序中的case'+'的情况输出1+2的值3

二：程序编写题

思路分析：通过日期对一周的天数7做取余运算来判断是星期几
答案代码：
*/
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 1 && n <= 31) {
        switch ((n - 1) % 7) {//已知2017年10月1日是星期日，所以要错开一天
            case 0:
                cout << "星期日" << endl;
                break;
            case 1:
                cout << "星期一" << endl;
                break;
            case 2:
                cout << "星期二" << endl;
                break;
            case 3:
                cout << "星期三" << endl;
                break;
            case 4:
                cout << "星期四" << endl;
                break;
            case 5:
                cout << "星期五" << endl;
                break;
            case 6:
                cout << "星期六" << endl;
                break;
        }
    }


    return 0;
}
