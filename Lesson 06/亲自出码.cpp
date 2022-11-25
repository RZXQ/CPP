#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // 输入球的半径
    double r;
    cin >> r;
    // 计算球的提及
    const double pi = 3.14;
    double v = 1.0 * 4 / 3 * pi * r * r * r;
    // 输出体积并保留 2 位小数
    cout << fixed << setprecision(2) << v << endl;
    return 0;
}