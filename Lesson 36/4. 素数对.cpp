#include <iostream>
#include <cmath>

using namespace std;

// 判断是否为素数
int prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    if (n < 5) {
        cout << "empty";
        return 0;
    }
    for (int i = 3; i <= n - 2; i++) {
        if (prime(i) && prime(i + 2)) {
            cout << i << " " << i + 2 << endl;
        }
    }
    return 0;
}