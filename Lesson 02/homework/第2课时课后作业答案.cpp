/* 
一：补全代码 
题目描述：将8000秒表示成小时分钟秒的形式。
#include <iostream>
using namespace std;
int main(){
    int h, m, s;
	h  =  _________；
    m  = 8000/60%60;
	s  = 8000%60;
	cout << "8000秒=" << h << "小时" << m << "分" << s << "秒" << endl; 
	return 0;
}
1.横线处应该填写的代码是(     )
A 8000%60 B 8000/60  C 8000%3600  D 8000/3600

答案：D
解析：由题意和代码位置咱们可以知道变量h用来存储8000秒时几个小时，因为一小时等于六十
分钟，一分钟等于六十秒，所以一小时等于三千六百秒，一共有八千秒所以答案是第四项D

2.这段代码的输出结果是(     )
A 8000秒=2时13分20秒
B 2小时13分20秒
C 8000秒=2小时13分20秒
D 8000秒=2小时13分钟20秒 
答案:C
解析：通过仔细观察输出语句我们可以发现分别是小时，分和秒所以 c选项符合我们输出语句的要求。

二：程序编写题
思路分析：考察同学们对于取余操作和除法操作的应用，一个整数对10取余将得到他的个位数，除以10将得到他去掉个位数后的值。本道题的易错点在于：输入的是一个三位数，不是三个一位数。 
答案代码：*/
#include<iostream>

using namespace std;

int main() {
    int n = 123;
    int ge = n % 10;
    int shi = n % 100 / 10;
    int bai = n / 100;
    cout << ge << shi << bai << endl;
    // n%10 得到n的个位数的值    n/10%10得到n的十位上的值    n/100得到他的百位上的数字
    return 0;
}


