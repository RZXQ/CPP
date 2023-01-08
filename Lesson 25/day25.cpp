#include <iostream>

using namespace std;

int main() {
    // // // 使用双重 for 循环输出指定层高的金字图案
    // // //菱形图案上半部分
    // int n;
    // cin >> n;
    // // 按行输出
    // for (int i = 1; i <= n; i++) {
    //     // 先输出空格, 空格 = 行数 - 当前的行号
    //     for (int j = 1; j <= n - i; j++) {
    //         cout << " ";
    //     }
    //     // 输出 * * 的数量 = 2 * i - 1
    //     for (int k = 1; k <= 2 * i - 1; k++) {
    //         cout << "*";
    //     }
    //     // 每输完一行, 换行
    //     cout << endl;
    // }
    //
    // // 输出菱形图案
    // // 菱形图案下半部分
    // for (int i = 1; i <= n - 1; i++) {
    //     // 输出空格, 空格数量 = 行号
    //     for (int j = 1; j <= i; j++) {
    //         cout << " ";
    //     }
    //     // 输出 * * 的数量 = 2 * (n - i ) - 1
    //     for (int k = 1; k <= 2 * (n - i) - 1; k++) {
    //         cout << "*";
    //     }
    //     // 换行
    //     cout << endl;
    // }

    return 0;
}