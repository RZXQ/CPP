/* 
一：补全代码 
题目名称：单词翻转
题目描述：输入一个句子（一行），将句子中的每一个单词翻转后输出。
输入描述：只有一行，为一个字符串，不超过 500 个字符。单词之间以空格隔开。
输出描述：翻转每一个单词后的字符串，单词之间的空格需与原文一致。

#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char a[501];
	cin.getline(a,501); 
	int lena = strlen(a);
	int flag = 0,last = 0,start = 0; 
	for(int i = 0;i < lena;i++){
		if(____(1)____){
			flag++;
			if(i == lena - 1){
				last = i;
			}else{
				last = i - 1;
		}
		for(____(2)____){
			cout << a[j];
		} 
		if(flag == 1){
			cout << ' ';
			flag = 0;
		} 
		start = i + 1; 
		} 
	} 
	return 0;
}
 
1.横线(1)处应该填写的代码是(     )
A a[i]==' '||i == lena - 1 B a[i]==' '||i == lena C i == lena - 1  D a[i]==' '
答案：

2.这段(2)代码的输出结果是(     )
A int j = last;j>=start;j++ B int j = last;j>start;j--  C int j = last;j>start;j++  D int j = last;j>=start;j--
答案：


二：程序编写题
题目名称：统计不同类型字符出现个数
题目描述：输入一个字符串（假设长度不超过1000个字符），统计其中大写，小写，数字，其他字符出现的次数。
输入描述：一行字符串，其中包含数字，大小写字母和其它符号 
输出描述：一行包含四个数字中间用空格隔开 
样例输入：
Hello what are you doing 123?  
样例输出：
1 19 3 6 
说明：输入一个字符串长度不超过1000个字符。
*/
#include<iostream>

using namespace std;

int main() {

    return 0;
}



	