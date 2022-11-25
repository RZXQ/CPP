#include <iostream>

using namespace std;

int main() {
    // 声明两个整形变量, 并输入
    int x, y;
    cin >> x >> y;
    // 使用 if...else... 语句判断
    if (x >= -1 && x <= 1 && y >= -1 && y <= 1) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}