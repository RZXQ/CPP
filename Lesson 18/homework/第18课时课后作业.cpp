/*
一：补全代码 
题目描述：下面是一个图书的单价表：

计算概论 28.9 元/本

数据结构与算法 32.7 元/本

数字逻辑 45.6元/本

C++程序设计教程 78 元/本

人工智能 35 元/本

计算机体系结构 86.2 元/本

编译原理 27.8元/本

操作系统 43 元/本

计算机网络 56 元/本

JAVA程序设计 65 元/本

给定每种图书购买的数量，编程计算应付的总费用。

输入：输入一行，包含10个整数(大于等于0，小于等于100)，分别表示购买的《计算概论》、
《数据结构与算法》、《数字逻辑》、《C++程序设计教程》、《人工智能》、《计算机体系结构》、
《编译原理》、《操作系统》、《计算机网络》、《JAVA程序设计》的数量（以本为单位）。
每两个整数用一个空格分开。

输出：输出一行，包含一个浮点数f，表示应付的总费用。精确到小数点后一位。
（使用文件操作  输入文件为：pace.in
               输出文件为：pace.out）
#include<iostream>
#include<cstdio> 
#include<iomanip> 
using namespace std;
int main(){
	//打开输入输出文件
	______________(1)_____________________
	______________(2)_____________________
	
	double sum=0;
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10;
	sum=n1*28.9+n2*32.7+ n3*45.6+ n4*78+ n5*35+ n6*86.2+ n7*27.8+ n8*43+ n9*56+ n10*65; 
	
	cout << fixed << setprecision(1)<< sum ;

	//关闭输入输出文件
	______________(3)_____________________
	______________(4)_____________________

	return 0;
}
1.横线__(1)___和横线____(2)____处应该填写的代码是(     )
A fopen("pace.in","r",stdin);fopen("pace.out","w",stdout);    
B fopen("pace.in","r",stdin);fopen("pace.out","r",stdout);     
C freopen("pace","r",stdin);freopen("pace","w",stdout);  
D freopen("pace.in","r",stdin);freopen("pace.out","w",stdout);
答案：

2.横线__(3)___和横线__(4)___处应该填写的代码是(     )
A freclose(stdin);freclose(stdout);
B freclose(in);freclose(out);
C fclose(stdin);fclose(stdout);
D fclose(in);fclose(out);
答案：

二：程序编写题

题目名称：小小课代表
题目描述：小程是班里的数学科代表，现在数学老师交给他一个任务就是
把文件math.in 中n个同学的数学成绩求出一个平均成绩，输出到文件math.out文件中，
并输出所有不及格（小于60）同学的成绩。（保留两位小数）


样例输入：
8
60 70 80 90 30 20 40 10 
样例输出：
30 20 40 10
50

说明：1<= n <= 100
*/
#include<iostream>

using namespace std;

int main() {

    return 0;
}
