#include <iostream>

using namespace std;

struct student {
    int num, h;
};
student stu[101];

int main() {
    int n, max = 0, m;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        stu[i].num = i;
        cin >> stu[i].h;
        if (max < stu[i].h) {
            max = stu[i].h;
            m = i;
        }
    }
    cout << stu[m].num << ' ' << stu[m].h;
}