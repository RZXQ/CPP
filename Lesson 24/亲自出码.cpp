#include <iostream>

using namespace std;

// 有奖竞猜
int main() {
    int n, a[6], res, min = 1001, index;
    cin >> n;
    for (int i = 1; i <= 5; i++) {
        cin >> a[i];
        // 通过绝对值判断数组当中的数与数字 n 的距离
        res = abs(a[i] - n);
        if (min > res) {
            // 存储最小绝对值
            min = res;
            // 记录当前数组元素下标
            index = i;
        }
    }
    cout << a[index] << endl;
    return 0;
}