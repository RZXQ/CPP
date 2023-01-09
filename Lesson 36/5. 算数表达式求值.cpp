#include <iostream>
#include <iomanip>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

double div(int a, int b) {
    return a * 1.0 / b;
}

int main() {
    int m, n;
    char x;
    double c;
    cin >> m >> x >> n;
    if (x == '+') {
        c = add(m, n);
    }
    if (x == '-') {
        c = sub(m, n);
    }
    if (x == '*') {
        c = mul(m, n);
    }
    if (x == '/') {
        c = div(m, n);
    }
    cout << fixed << setprecision(2) << c << endl;
}