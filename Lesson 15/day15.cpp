#include <iostream>

using namespace std;

int main() {
    // while 和 do...while 的区别
    // do...while 循环
    // int i = 1;
    // do {
    //    cout << "i=" <<i <<endl;
    //    i++;
    // } while (false);

    // while 循环
    // int i = 1;
    // while (false) {
    //     cout << "i = " << i << endl;
    //     i++;
    // }

    // 输出 n 个正整数中的最大值
    // int n, temp, max = 0;
    // cin >> n;
    // while (n--) {
    //     cin >> temp;
    //     // 判断输入的数是否为最大值
    //     if (temp > max) {
    //         max = temp;
    //     }
    // }
    // // 输出最大值
    // cout << max << endl;

    // 斐波那契数列问题
    // int k, s = 0, i = 3;
    // int first = 1, second = 1;
    // cin >> k;
    // if (k == 1 || k == 2) {
    //     s = 1;
    // } else { // k >= 3
    //     // 反复求和, 通过前两个数的和得到后面数
    //     while (i <= k) {
    //         s = first + second;
    //         // 更新前两个数的值;
    //         first = second;
    //         second = s;
    //         i++;
    //     }
    // }
    // cout << s << endl;

    // 数字反转
    // int n, s = 0, a;
    // cin >> n;
    // if (n == 0) {
    //     s = 0;
    // }
    // // n不为0    123   321   3   2   32*10+1   321
    // while (n != 0) {
    //     a = n % 1;
    //     s = s * 10 + a;
    //     n = n / 10;
    // }
    // cout << s << endl;

    return 0;
}