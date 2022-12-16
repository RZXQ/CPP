#include<fstream>

using namespace std;
// 创建全局所输入，输出文件对象
ifstream cin("sum1.in");
ofstream cout("sum1.out");

int main() {
    // 正常的逻辑代码
    int a, b;
    cin >> a >> b;
    cout << a * a + b * b;
    // 关闭输入输出文件
    cin.close();
    cout.close();
    return 0;
}