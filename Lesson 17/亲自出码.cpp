#include  <iostream>

using namespace std;

int main() {
    int n, m, max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> m;
        if (m % 2 == 0) {
            continue;
        }
        if (max < m) {
            max = m;
        }
    }

    if (max == 0) {
        cout << "NO" << endl;
    } else {
        cout << max << endl;
    }

    return 0;
}