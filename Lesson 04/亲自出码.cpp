#include <iostream>

using namespace std;

int main() {


    double a, b;
    cin >> a >> b;

    double alls, as, bs;

    alls = a * a + b * b;
    as = (a + b) * a / 2;
    bs = b * b / 2;

    cout << alls -as - bs <<endl;
    return 0;
}