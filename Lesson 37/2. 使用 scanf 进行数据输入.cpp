#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    // 使用 scanf 读取数据
    int a;
    double b;
    char c;
    scanf("%d", &a);
    scanf("%lf%c", &b, &c);
    printf("%d\n", a);
    printf("%.2lf", b);
    return 0;
}