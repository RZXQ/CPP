#include <iostream>

using namespace std;

int isPrime[10001];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 10001; i++) {
        isPrime[i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i] == 1) {
            for (int j = i * 2; j <= n; j = j + i) {
                isPrime[j] = 0;
            }
        }
    }
    for (int i = 2; i < n; i++) {
        if (isPrime[i] == 1) {
            cout << i << " ";
        }
    }
    return 0;
}