#include <iostream>

using namespace std;

int main() {
    // 声明整形变量 n, 并输入
    int n;
    cin >> n;
    // 使用 if...else...语句判断是否是 5 的倍数
    if (n % 5 == 0) {
        cout << n / 5 << endl;
    } else { // n 不是 5 的倍数
        cout << "No";
    }
    return 0;
}