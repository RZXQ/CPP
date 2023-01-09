#include <iostream>
#include <cstdio>

using namespace std;

// 池塘注水问题
int main() {
    int a, b; // m 表示注满, n 表示排完
    scanf("%d%d", &a, &b);
    int c = a * b;
    // 速率 = 总水量 / 总时间
    // 注水
    a = c / a;
    // 排水
    b = c / b;
    printf("%d", c / (a - b));
    return 0;
}