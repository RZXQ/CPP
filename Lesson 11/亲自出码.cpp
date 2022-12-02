#include <iostream>

using namespace std;

int main() {
    // 声明整型变量, 存储成绩, 输入
    int n;
    cin >> n;
    // 使用三目运算符进行判断, 输出等级
    cout << (n >= 90 ? 'A' : (n >= 60 ? 'B' : 'C')) << endl;
    return 0;
}