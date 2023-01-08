#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    freopen("ascii.in", "r", stdin);
    freopen("ascii.out", "w", stdout);
    char a;
    int n;
    cin >> a;
    n = a;
    if (n % 2 != 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}

