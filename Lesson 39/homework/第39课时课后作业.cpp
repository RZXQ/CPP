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
答案：

二：程序编写题

题目名称：成绩统计——按平均分排序
题目描述：输入N个学生的姓名和语文、数学的得分，按平均分降序输出。分数相同的按输入先后输出。
输入描述：第1行，有一个整数N，N的范围是[1…100]；下面有N行，每行一个姓名，2个整数。姓名由不超过10个的小写字母组成，整数范围是[0…100]。
输出描述：按平均分排序后的名单：姓名  语文  数学  平均分。

样例输入：
3
gaoxiang  78  96
wangxi    56  99
liujia   90  87
样例输出：
liujia 90 87 88.5
gaoxiang 78  96  87
wangxi 56  99  77.5

说明：N的范围是[1…100],姓名由不超过10个的小写字母组成,整数范围是[0…100]。
*/
#include<iostream>

using namespace std;

int main() {

    return 0;
}