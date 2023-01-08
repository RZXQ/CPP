/*
一：补全代码 
题目描述：判断字符串是否回文，回文是指顺读和倒读都一样的字符串。
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
	string str;
 	cin>>str; 
 	int n = _________;
 	bool flag = true;
 	for(int i=0;i<n;i++) {
 		
 		if(str[i]!=str[n-1-i]) {
 			flag=false;
 			break;
		 }
	 }
	if(flag==true){
		cout<<"yes";
	} else{
		cout<<"no";
	}
return 0;
}
1.横线处应该填写的代码是(     )
A length B length()  C str.length()  D str.length(str)
答案：

二：程序编写题
题目名称：字符串比较
题目描述：按字母顺序比较两个字符串ch1和ch2的大小，若相等，则输出0；否则输出其第一个不相等的字符的acsii编码差值。 
输入描述：输入只有一组，首先在第一行上输入字符串ch1，然后在第二行输入字符串ch2，保证每个字符串长度不超过80。
输出描述：在一行上输出比较结果。若相等，则输出0；否则输出其第一个不相等的字符的acsii编码绝对差值。 

样例输入：
abcdefg
abcdefh 
样例输出：
1

*/
#include<iostream>

using namespace std;

int main() {

    return 0;
}