#include<iostream>
#include<cstdio>
#include <math.h>

using namespace std;

int main() {
    freopen("apple.in", "r", stdin);
    freopen("apple.out", "w", stdout);
    double x, y, n;
    cin >> x >> y >> n;
    cout << n - ceil(y / x);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
