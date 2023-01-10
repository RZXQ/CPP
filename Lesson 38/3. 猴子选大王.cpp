#include <iostream>

using namespace std;

struct m {
    int num;
    int data;
};
m a[1001];

// 猴子选大王
int main() {
    int num1, max = 0, n;
    cin >> num1;
    for (int i = 0; i < num1; i++) {
        cin >> a[i].num >> a[i].data;
        if (max < a[i].data) {
            max = a[i].data;
            n = i;
        }
    }
    cout << a[n].num << ' ' << a[n].data;
    return 0;
}