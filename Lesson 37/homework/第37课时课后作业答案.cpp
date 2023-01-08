/* 
一：补全代码 
题目描述：已知某梯形的上底为a，下底为b,高为h，求它的面积s。（使用scanf，printf输入输出）。
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double a,b,h,s;
	scanf("%lf %lf %lf",①________);
	s=(a+b)*h/2;
	printf("%.1lf",②________);
	return 0;
}
1.横线①处应该填写的代码是(     )
A a,b,h B &a,&b,&h  C abh  D &a&b&h
答案：B
解析：scanf进行输入时变量名前要加'&'，并且多个变量间要用逗号隔开。

2.横线②处应该填写的代码是________。
答案：s
解析：printf进行输出时直接写变量名即可，本题要求输出面积s。

二：程序编写题
思路分析：考察同学们对于scanf输入和printf输出的应用。通过for循环从一月开始，遍历到输入的月份中的所有月份，根据每月天数实际情况进行累加，同时要注意根据年份是否为闰年判断二月的天数，最后加上输入的日即可。
答案代码：*/
#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    int b, c, n = 0, i, j;
    scanf("%d %d", &b, &c);//使用scanf进行输入
    for (i = 1; i < b; i++) { //遍历1月到b-1月经过了多久，进行累加
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            n = n + 31;
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            n = n + 30;
        } else {
            n = n + 28;
        }
    }
    n = n + c;//累加当前日期
    printf("%d", n);
    return 0;
}
