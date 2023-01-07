#include <iostream>

using namespace std;
int arr[101];

int main() {
    // 找比平均值大的数及对应下标
    int n;
    cin >> n;
    // 赋值
    int sum = 0;
    double avg = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = double(sum) / n;
    // 遍历数组元素, 输出平均值大的数, 及下标
    for (int j = 0; j < n; j++) {
        if (arr[j] > avg) {
            cout << arr[j] << " " << j << endl;
        }
    }
}