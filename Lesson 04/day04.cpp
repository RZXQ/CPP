#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // 测试整形溢出
    // int a = 100;    // 100
    // int b = -100;   // -100
    // int c = 5 / 3;  // 1
    // int d = 3.5;    // 3
    // int e = 2147483647;
    // int f = -2147483648;

    // 测试溢出
    // int g = 0, h = 0;
    // cout << e << " " << f << endl;
    // g = e + 1;
    // h = f - 1;
    // cout << g << " " << h << endl;
    // return 0;

    // 测试长整型数据溢出
    // long long a = 100;    // 100
    // long long b = -100;   // -100
    // long long c = 5 / 3;  // 1
    // long long d = 3.5;    // 3
    // long long e = 9223372036854775807;
    // long long f = -9223372036854775808;
    // // 测试溢出
    // long long g = 0, h = 0;
    // cout << e << " " << f << endl;
    // g = e + 1;
    // h = f - 1;
    // cout << g << " " << h << endl;

    // 计算变量存储空间的大小
    // short a;
    // int b;
    // long long c;
    // cout << sizeof(a) << " ";
    // cout << sizeof(b) << " ";
    // cout << sizeof(c) << endl;

    // 输出浮点型数
    // double a = 0.123456789;
    // double b = 123456789.123456789012345;
    // cout << a << endl;
    // cout << b << endl;

    // 保留指定小数位数
    // double a = 0.123456789;
    // double b = 123456789.123456789012345;
    // cout << fixed << setprecision(3) << a << endl;
    // cout << fixed << setprecision(3) << b << endl;

    // 计算阴影部分的面积
    // 声明两个 double 类型变量的存储边长, 并输入
    // double a, b;
    // cin >> a >> b;
    // // 声明三个 double 类型变量的存储总面积, 左上角空白, 右上角空白
    // double alls, as, bs;
    // // 计算面积
    // alls = a * a + b * b;
    // as = (a + b) * a / 2;
    // bs = b * b / 2;
    // // 输出
    // cout << "阴影的面积为: " << alls - as - bs << endl;


    return 0;
}