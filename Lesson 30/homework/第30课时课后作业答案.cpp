/* 
一：选择题
题目描述：在字符串的操作中，能实现字符串复制功能的函数是(     )
A strlen函数
B strcat函数  
C strcpy函数
D strcmp函数

答案：C
解析：strlen函数用于计算字符串中有效字符的个数，strcat函数是字符串拼接函数，strcpy函数是字符串复制函数，strcmp函数是字符串比较函数。


二：程序编写题
思路分析：这道题目考察的是字符串逆序输出，需要使用到计算字符串长度函数。然后进行输入的时候，需要直接将输出的字符串进行拼接，string类型拼接直接就是+=，char数组拼接需要用到strcat()。
答案代码：*/
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    //将字符串str2拼接到str1末尾
    str1 += str2;
    //倒序输出
    for (int i = str1.length() - 1; i >= 0; i--) {
        cout << str1[i];
    }
    return 0;
}

