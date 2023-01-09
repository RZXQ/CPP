#include <iostream>

using namespace std;

// 判断当前数字是否为素数
int isPrime(int x) {
    if (x <= 1) {
        return 0;
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}