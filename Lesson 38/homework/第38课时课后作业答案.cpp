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
答案：t.num==s[i].num
解析：我们定义了结构体来存储学生信息，题目要求输入一个学号，我们根据学号去查找这个学生的信息并输出。所以我们需要遍历结构体数组，并且找到与输入的学号相同的学号。

二：程序编写题
思路分析：每个星星都有横坐标和纵坐标，我们需要对两个坐标建立起联系，也就是创建一个结构体来存放星星的两个坐标。使用结构体数组来存放输入的所有星星信息。用双重循环使所有的星星进行两两比较，如果i和j两个星星的横纵坐标都相同说明这是一个星星，计算出一共有多少个相同的星星后，用星星总数减去相同的星星数量即可。
答案代码：*/
#include<iostream>

using namespace std;
struct node {
    int x, y;
    bool flag;
} a[301];
int sum = 0;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
        a[i].flag = 1;
        for (int j = 0; j < i; j++) {
            if (a[j].flag == 0) {
                continue;
            }
            if (a[i].x == a[j].x && a[i].y == a[j].y) {
                a[i].flag = 0;
            }
        }

    }
    for (int i = 0; i < n; i++) {
        if (a[i].flag == 1) {
            sum++;
        }
    }
    cout << sum;
    return 0;
}
