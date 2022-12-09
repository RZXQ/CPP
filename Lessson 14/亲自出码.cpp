#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    do {
        // 重复做的事情
        if (n % 2 != 0) { // n 是奇数
            n = 3 * n + 1;
            cout << (n - 1) / 3 << "*3+1=" << n << endl;
        } else { // n 是偶数
            n = n / 2;
            cout << n * 2 << "/2=" << n << endl;
        }
    } while (n > 1);
    cout << "End" << endl;
    return 0;
}