#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    // for 循环进行输入
    int t1, t2;
    int count = 0, max = 0; // count 正常压力持续小时, max 最长小时
    for (int i = 1; i <= n; i++) {
        cin >> t1 >> t2; // t1 收缩压, t2 舒张压
        // 判断是否正常
        if (t1 >= 90 && t1 <= 140 && t2 >= 60 && t2 <= 90) {
            count++;
            // 判断是否超过最大时长
            if (count > max) {
                max = count;
            }
        } else { // 血压不正常
            count = 0;
        }
    }
    return 0;
}