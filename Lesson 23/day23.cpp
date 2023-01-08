#include <iostream>

using namespace std;

int main() {
    // // 数列问题
    // // 初始化等差数列
    // int arr[50];
    // // 先给第一个元素赋值
    // arr[0] = 10;
    // // 使用 for 循环给其他元素进行赋值
    // for (int i = 1; i < 50; i++) {
    //     arr[i] = arr[i - 1] + 10;
    // }
    // // 访问, 输出
    // for (int j = 0; j < 50; j++) {
    //     cout << arr[j] << " ";
    // }

    // // 斐波那契数列
    // int a[47];
    // int k;
    // cin >> k;
    // // 初始化数列
    // a[0] = 1;
    // a[1] = 1;
    // for (int i = 2; i < k; i++) {
    //     a[i] = a[i - 1] + a[i - 2];
    // }
    // //  输出第 k 项
    // cout << a[k - 1] << endl;

    // // 开关问题
    // // 定义数组存储所有灯的状态, 使用 1 代表亮, 0 代表熄灭
    // int state[31];
    // int n;
    // cin >> n;
    // // 初始化灯的状态, 全亮
    // for (int i = 1; i <= n; i++) {
    //     state[i] = 1;
    // }
    // // 开关灯操作
    // for (int j = 1; j <= n; j++) {
    //     // 编号为 2 的倍数的灯开关
    //     if (j % 2 == 0) {
    //         state[j] = 1 - state[j];
    //     }
    //     // 编号为 3 的倍数的灯开关
    //     if (j % 3 == 0) {
    //         state[j] = 1 - state[j];
    //     }
    //     // 编号为 4 的倍数的灯开关
    //     if (j % 4 == 0) {
    //         state[j] = 1 - state[j];
    //     }
    //     // 编号为 5 的倍数的灯开关
    //     if (j % 5 == 0) {
    //         state[j] = 1 - state[j];
    //     }
    // }
    // // 遍历所有的灯, 输出亮着的灯的编号
    // for (int j = 1; j <= n; j++) {
    //     if (state[j] == 1) {
    //         cout << j << " ";
    //     }
    // }

    // // 排队问题
    // // 声明数组来存储学生的状态
    // int state[51];
    // int n;
    // cin >> n;
    // // 设置学生的状态为面向老师, 1 表示面向, 0 表示背向
    // for (int i = 1; i <= n; i++) {
    //     state[i] = 1;
    // }
    // // 转向
    // for (int i = 1; i <= n; i++) {
    //     // 编号为 2 的倍数的同学
    //     if (i % 2 == 0) {
    //         state[i] = 1 - state[i];
    //     }
    //     // 编号为 5 的倍数的同学转
    //     if (i % 5 == 0 && state[i] == 1) {
    //         state[i] = 1 - state[i];
    //     }
    // }
    // // 输出面向老师的同学的编号
    // for (int i = 1; i <= n; i++) {
    //     if (state[i] == 1) {
    //         cout << i << " ";
    //     }
    // }
    return 0;
}