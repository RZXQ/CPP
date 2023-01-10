#include <iostream>
#include <string>

using namespace std;
struct student {
    string name;
    int chinese, math;
    int total;
};

student stu[101];

int main() {
    int n;
    cin >> n;
    // 初始化学生数据
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].chinese >> stu[i].math;
        stu[i].total = stu[i].chinese + stu[i].math;
    }
    // 寻找最高分学生
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (stu[i].total > stu[index].total) {
            index = i;
        }
    }
    cout << stu[index].name << ' ' << stu[index].chinese << ' ' << stu[index].math << ' ' << stu[index].total;
    return 0;
}