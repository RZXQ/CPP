/*
一：补全代码 
下列代码的输出结果是（   ）
#incldue<iosream>
using namespace std;
int main(){
	int i=100;
	int count=0;
	while(i>0){
		if(i%2==0){
			count++;
		}
		i--;
	}
	cout<<count<<endl;
	return 0;
} 
A 49 B 50  C 51  D 52
答案：B
解析：此程序的功能是输出1到100之间偶数的个数


二：程序编写题

思路分析：通过用循环来计算步数，并改变步长，直到最后走的距离不大于零，注意当距离输入为2时是要走一步的
答案代码：
*/
#include<iostream>

using namespace std;

int main() {
    double x, i = 2, count = 0;//i代表步长 count用来存储步数
    cin >> x;
    while (x > 0) {//当x大于0时表明还有距离没有走
        x -= i;  //每走一步x的值就减少当前步长
        count++;
        i *= 0.98;//改变步长
    }
    cout << count;
    return 0;
}
