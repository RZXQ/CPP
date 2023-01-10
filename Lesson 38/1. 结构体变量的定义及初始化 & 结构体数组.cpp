#include <iostream>
#include <string>

using namespace std;

// 定义结构体 student
struct student {
    int num;
    string name;
    double chinese, math, english;
};

int main() {
    // 定义 student 类型的结构体变量
    student a;
    a.num = 10001;
    a.name = "狮子王";
    a.chinese = 89;
    a.math = 56;
    a.english = 65;
    cout << a.name << endl;

    // 定义结构体数组存储多个学生信息
    student stu[100];
    for (int i = 0; i < 3; i++) {
        cin >> stu[i].num;
        cin >> stu[i].name;
        cin >> stu[i].chinese;
        cin >> stu[i].math;
        cin >> stu[i].english;
    }
    swap(stu[0], stu[2]);
    for (int i = 0; i < 3; i++) {
        cout << stu[i].num << ' ' << stu[i].name << ' ' << stu[i].chinese << ' ' << stu[i].math << ' ' << ' '
             << stu[i].english << endl;
    }
    return 0;
}