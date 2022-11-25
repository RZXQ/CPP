#include <iostream>

using namespace std;

int main() {
    // 声明 double 类型变量, 并输入
    double w;
    cin >> w;
    // 使用 if 语句来判断, 计算
    // 不超过 5 斤
    if (w <= 5) {
        cout << w * 3 << endl;
    }
    // 超过 5 斤
    if (w > 5) {
        cout << 5 * 3 + (w - 5) * 3 * 0.8 << endl;
    }
    return 0;
}