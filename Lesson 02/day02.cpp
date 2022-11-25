#include <iostream>

using namespace std;

int main() {
    // 声明整型变量 n, 并赋值为 1
    int n = 1;

    // 计算两个变量的和
    int c1 = 3;
    int c2 = 2;

    // 输出两个变量的和
    // cout << c1 + c2 << endl;

    // 输出两个变量的乘积
    // cout << c1 * c2 << endl;

    // 输出两个变量的差
    // cout << c1 - c2 << endl;

    // 输出两个变量的商
    cout << c1 / c2 << endl;

    // 计算一个三位数各个数位上的数字之和
    // 声明整形变量, 并赋值为一个三位数
    int a = 123;
    // 获取各位, 十位, 百位上的各个数字
    int g, s, b;
    g = a % 10;
    s = a / 10 % 10;
    b = a / 100;
    // 输出个位, 十位, 百位数字之和
    cout << g + s + b << endl;
    return 0;
}