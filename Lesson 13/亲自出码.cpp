#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // 计算 n 个正整数的平均值, 保留 2 位小数
    // 声明整型变量 n, 输入整数的个数
    int n;
    cin >> n;
    int t = n;
    int temp, sum = 0;
    double avg;
    // 输入 n 个整数, 得到总和
    while (n--) {
        cin >> temp;
        sum += temp;
    }
    // 求平均值 平均值 = 总和 / 总个数
    avg = 1.0 * sum / t;
    // 输出平均值
    cout << fixed << setprecision(2) << avg << endl;
    return 0;
}