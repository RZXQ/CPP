#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double apples = 3.00, pears = 2.50, oranges = 4.10, grapes = 10.20;
    cout << "[1]apples" << endl;
    cout << "[2]pears" << endl;
    cout << "[3]oranges" << endl;
    cout << "[4]grapes" << endl;
    int n;
    cin >> n;
    switch (n) {
        case 1:
            cout << "price = ";
            cout << fixed << setprecision(1) << apples << endl;
            break;
        case 2:
            cout << "price = ";
            cout << fixed << setprecision(1) << pears << endl;
            break;
        case 3:
            cout << "price = ";
            cout << fixed << setprecision(1) << oranges << endl;
            break;
        case 4:
            cout << "price = ";
            cout << fixed << setprecision(1) << grapes << endl;
            break;
    }
    return 0;
}