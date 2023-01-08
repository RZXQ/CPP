/* 
一：选择题
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

答案：C
解析：求字符串的长度使用 str.length()方法。


二：程序编写题
思路分析：这道题目考察的是字符串基于字典序的大小比较，使用if语句进行判断如果相等直接输出0，不相等直接将差值的绝对值输出。
答案代码：*/
#include<iostream>
#include<cmath>

using namespace std;

int main() {
    string ch1, ch2;
    cin >> ch1 >> ch2;
    //判断输入的两个字符串是否相等
    if (ch1 == ch2) {
        cout << 0;
    } else {
        for (int i = 0; i < 80; i++) {
            //如果不相等输出差的值
            if (ch1[i] != ch2[i]) {
                cout << abs(ch1[i] - ch2[i]);
                break;
            }
        }
    }
    return 0;
}
