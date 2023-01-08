#include <iostream>

using namespace std;
int a[20], b[20];

int main() {
    int n;
    cin >> n;
    a[1] = 1;
    b[1] = 2;
    cout << "1/2" << " ";
    // 从第二项开始
    for (int i = 2; i <= n; i++) {
        a[i] = b[i - 1]; // 从第二项开始分数的分子式上一个数的分母
        b[i] = a[i - 1] + b[i - 1]; // 分母是上一个数的分子 + 分母
        cout << a[i] << '/' << b[i] << " ";
    }
}