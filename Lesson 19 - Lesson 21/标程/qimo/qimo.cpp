#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    freopen("qimo.in", "r", stdin);
    freopen("qimo.out", "w", stdout);
    int n;
    cin >> n;
    switch (n) {
        case 1:
            cout << 'A' << endl;
            break;
        case 2:
            cout << 'B' << endl;
            break;
        case 3:
            cout << 'C' << endl;
            break;
        case 4:
            cout << 'D' << endl;
            break;
        case 5:
            cout << 'E' << endl;
            break;
        case 6:
            cout << 'F' << endl;
            break;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
