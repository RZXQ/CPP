#include <iostream>

using namespace std;

// 输出 12 个 * 号
void out_put() {
    for (int i = 0; i < 12; i++) {
        cout << "*";
    }
    cout << endl;
    return;
}

// 求两个整数的和
int fun(int a, int b) {
    int sum = 0;
    sum = a + b;
    return sum;
}

// 找出两个整数中较大数
void max(int a, int b) {
    if (a > b) {
        cout << a;
    } else {
        cout << b;
    }
}

// 求四个数中的最大值
int max(int a, int b, int c, int d) {
    // 把最大值存储到 a 中
    if (a < b) {
        a = b;
    }
    if (a < c) {
        a = c;
    }
    if (a < d) {
        a = d;
    }
    return a;
}


int main() {
    // // 输出 12 个 * 号
    // out_put();

    // // 求两个整数的和
    // int res = fun(5,6);
    // cout << res;

    // // 找出两个整数中较大数
    // max(99, 98);

    // // // 求四个数中的最大值
    // int a, b, c, d;
    // cin >> a >> b >> c >> d;
    // int n = max(a, b, c, d);
    // cout << n;

    return 0;
}