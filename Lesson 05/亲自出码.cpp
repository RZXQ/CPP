#include <iostream>

using namespace std;

int main() {
    // 输入圆的半径 r
    double r;
    cin >> r;
    // 计算圆的周长 c 和面积 s
    const double pi = 3.14159265;
    double c = 2 * pi * r;
    double s = pi * r * r;
    // 输出
    cout << c << " " << s << endl;
    return 0;
}
