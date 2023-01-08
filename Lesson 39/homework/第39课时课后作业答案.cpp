/* 
一：补全代码 
题目描述：输入N个学生的姓名和语文、数学的得分，输出语文挂科的学生名单。
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
struct  student{
	string name;
	double chinese,math; 
}; 
int main(){
	student stu[101];
	int n;
	cin >> n;		
	for(int i = 0;i < n;i++){
		cin >> stu[i].name >> stu[i].chinese >>stu[i].math;
	}
	
	for(int i = 0;i < n;i++) {
		if(_____________){
			cout<<stu[i].name<<endl; 
		} 
	}
		
	return 0;
}
1.横线处应该填写的代码是(     )
A stu[i].chinese < 60 B stu[i].math < 60  C stu[i].chinese >= 60  D stu[i].math < 60
答案：A
解析：根据题意，要输出语文不及格的学生名单，故选a。

二：程序编写题
思路分析：考察sort函数的进阶用法。想用sort函数对结构体数组进行排序，需要自定义函数来说明排序规则。在主函数调用sort()，排序后输出结构体数组即可。
*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
struct student {//定义结构体存放学生信息
    string name;
    double chinese, math, total;
};

bool cmp(student a, student b) {//按平均分排序，其实等于按总分排序，所以直接将总分降序排序即可
    return a.total > b.total;
}

int main() {
    student stu[101];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].chinese >> stu[i].math;
        stu[i].total = stu[i].chinese + stu[i].math;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << stu[i].name << " " << stu[i].chinese << " " << stu[i].math
             << " " << stu[i].total / 2 << endl;//输出时讲总分除以二得到平均分
    }
    return 0;
}