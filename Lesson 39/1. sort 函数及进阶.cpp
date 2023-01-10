#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int a[10] = {9, 6, 3, 8, 5, 2, 7, 4, 1, 0};
    sort(a, a + 10, compare);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}