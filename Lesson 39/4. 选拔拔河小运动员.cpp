#include <iostream>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

// 选拔拔河小运动员
int main() {
    int n, a[101] = {};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < 5; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}