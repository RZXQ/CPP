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
	cin.getline(a,501); //字符串的输入
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
答案：A
解析：题目的要求是将每一个单词翻转过来，分开单词的是空格和字符串结束，字符串结束的下标=长度-1，
所以此处代码为a[i]==' '||i == lena - 1，答案是A。

2.这段(2)代码的输出结果是(     )
A int j = last;j>=start;j++ B int j = last;j>start;j--  C int j = last;j>start;j++  D int j = last;j>=start;j--
答案：D
解析：此处是需要将单词翻转，因此需要从后往前输出，j--，所以此处代码为int j = last;j>=start;j--，答案是D。


二：程序编写题
思路分析：首先进行输出，输出的时候考虑是否需要有空格，然后遍历判断大写、小写、数字以及其它字符的个数，最后输出。

答案代码：*/

#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char a[1001];
    int b = 0, c = 0, d = 0, e = 0;
    cin.getline(a, 1001);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            b++;
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            c++;
        } else if (a[i] >= '0' && a[i] <= '9') {
            d++;
        } else {
            e++;
        }
    }
    cout << b << " " << c << " " << d << " " << e;
    return 0;
}


	