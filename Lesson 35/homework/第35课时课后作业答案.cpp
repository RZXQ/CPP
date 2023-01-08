/*
一：选择题
题目描述：下列有关函数参数的说法不正确的是（）
A 传值参数在调用函数时是将实参的值取出来赋值给形参
B 传引用参数在调用函数时将实参变量的地址取出来
C 一维数组在调用函数时不需要写出数组的元素个数
D 数组在作为函数参数时，是传值的

答案：D


二：程序编写题
 */
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>

using namespace std;

//判断一个数是否是素数
int isPrime(int x) {
    if (x <= 1) {
        return 0;
    }
    for (int i = 2; i * i < x; i++) {//10   2-9   1  10
        if (x % i == 0) {//说明i是x的约数 说明x不是质数
            return 0;
        }
    }
    return 1;
}

//反转函数
int reversal(int y) {//123  321
    int h = 0, m = 0;
    while (y != 0) {
        m = y % 10;//m = 123 % 10 =3   m = 12 % 10 = 2  m = 1 % 10 =1
        h = h * 10 + m; //h = 0+3 = 3   h = 3*10+2 = 32   h = 32* 10+1=321
        y = y / 10; //y = 123/10=12  y = 12/10 = 1    y = 1/10 = 0
    }
    return h;
}

int main() {
    int m, n, h;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        //h存储数字翻转之后的值
        h = reversal(i);
        if (isPrime(i) && isPrime(h)) {
            cout << i << " ";
        }
    }
    return 0;
}
