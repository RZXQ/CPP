/*
一：单选题
1.设a=3,b=5,c=5，逻辑表达式(a||b+c && b-c)的结果为（  ）
A.0   B.1

2.对某产品征收税金，在产值1万元以上收税5%；在1万元以下但在5000元或者以上的征收税3%；
在5000元以下但在1000元或以上征收税2%；1000元以下的免收税。输出该产品的收税金额
#include<iostream> 
using namespace std;
int main(){
	double money,tax;
	tax=0;
	cin>>money;
	if(money>10000){
		tax=money*0.05;
	}
	else if(money>=5000){
		tax=money*0.03;
	}
	else if(_________){
		tax=money*0.02;
	}
	cout<<tax<<endl;
	return 0;
}
横线处应该填写的代码是(     )
A money>1000 B money<1000  C money<=1000  D money>=1000

二：程序编写题

题目名称：晶晶赴约会
题目描述：晶晶的朋友贝贝约晶晶下周一起去看展览，但晶晶每周的1、3、5有课必须上课，
请帮晶晶判断她能否接受贝贝的邀请，如果能输出YES；如果不能则输出NO。

输入描述：一行，贝贝邀请晶晶去看展览的日期，用数字1到7表示从星期一到星期日。
输出描述：一行，如果晶晶可以接受贝贝的邀请，输出YES，否则，输出NO。

样例输入：
2
样例输出：
YES
*/

#include<iostream>

using namespace std;

int main() {

    return 0;
}

