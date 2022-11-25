#include <iostream>

using namespace std;

int main() {
    // 声明整形变量, 输入
    int n;
    cin >> n;
    // 进行判断
    if (n % 3 == 0) { // 能被 3 整除
        if (n % 5 == 0) { // 能被 5 整除
            cout << "3" << " " << "5" << endl;
        } else {
            cout << "3" << endl;
        }
    } else if (n % 5 == 0) {
        cout << "5" << endl;
    } else {
        cout << "n" << endl;
    }
    return 0;
}