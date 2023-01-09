#include <iostream>
#include <string>

using namespace std;

// 判断正整数中是否包含某个数字
bool check(string a, char b) {
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b) {
            return true;
        }
    }
    return false;
}

int main() {
    string c;
    char d;
    cin >> c;
    cin >> d;
    if (check(c, d)) {
        cout << "true";
    } else {
        cout << "false";
    }
}
