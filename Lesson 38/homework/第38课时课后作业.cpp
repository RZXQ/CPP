/*
一：补全代码 
题目描述：有一学生成绩表，包括学号、姓名、3门课程成绩。请实现如下查找功能：输入一个学生的学号，输出该学生学号、姓名、3门课程成绩。
#include<iostream>
#include<cstdio>
using namespace std;
struct student{
	long long num;
	char name[20];
	int a,b,c;
};
int main(){
	int n,i,f=0;
	scanf("%d",&n);
	struct student s[n],t;
	for(i=0;i<n;i++) {
		scanf("%lld %s %d %d %d",&s[i].num,&s[i].name,&s[i].a,&s[i].b,&s[i].c);
	}	
	scanf("%lld",&t.num);
	for(i=0;i<n;i++){
		if(________){
			printf("%lld %s %d %d %d",s[i].num,s[i].name,s[i].a,s[i].b,s[i].c);
			f=1;
			break;
		}
	}
	if(f==0){
		printf("Not Found");
	}
	return 0;
}

1.横线处应该填写的代码是________。
答案：

二：程序编写题

题目名称：数星星
题目描述：一天，小明坐在院子里数星星，Gardon就出了个难题给她：Gardon在天空画出了一个矩形区域，让他输入矩形区域里有多少颗星星，仁慈的上帝还为他标出了每个星星的坐标。但小明数着数着就看花了眼，但他的原则是：宁愿多数一次，不可错过一个。如果小明把他数过的星星的坐标都告诉你，你能否帮他进行排重处理（如果两个星星的坐标位置相同，则视为一个星星），计算出星星的个数。
输入描述：首先输入一个整数n(n<=300)，接下来的n对整数，每对表示小明数过的一个星星的位置（星星的坐标在-10000到10000之间）。 
输出描述：输出星星的个数。

样例输入：
5 
0 3 
1 5 
1 1 
0 1 
1 5
样例输出：
4

说明：星星的坐标在-10000到10000之间
*/
#include<iostream>

using namespace std;

int main() {

    return 0;
}