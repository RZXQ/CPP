#include <iostream>

using namespace std;


int x = 10;
int y = 20;

void test() {
    int x = 30;
    cout << "test: " << x << endl;
    cout << "test: " << y << endl;
}

// 变量的作用域
int main() {
    test();
    cout << "main: " << x << endl;
    cout << "main: " << y << endl;
    return 0;
}