#include<iostream>

using namespace std;

// 定义函数, 根据字数判断短信的条数
int message(int m) {
    if (m % 70 == 0) {
        return m / 70;
    } else {
        return m / 70 + 1;
    }
}

int main() {
    int n, m, sum = 0;
    cin >> n; // 发送短信的次数
    for (int i = 0; i < n; i++) {
        cin >> m; // m 表示每条短信的字数
        sum = sum + message(m);
    }
    // 输出
    cout << sum * 0.1 << endl;
    return 0;
}