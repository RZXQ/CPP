#include <iostream>
#include <string>

using namespace std;

struct student {
    string name;
    int chinese, math;
    int total;

};

bool cmp(student a, student b) {
    return a.total > b.total;
}

student stu[101];

int main() {
    int n;
    cin >> n;
    // 初始化学生信息
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].chinese >> stu[i].math;
        stu[i].total = stu[i].chinese + stu[i].math;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << stu[i].name << ' ' << stu[i].chinese << ' ' << stu[i].math << ' ' << stu[i].total;
    }
    return 0;
}