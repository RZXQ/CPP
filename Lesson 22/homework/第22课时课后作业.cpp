/*一：补全代码 
题目描述：输出N(1<=N<=100)个数的最大值和最小值。
#include<iostream>
using namespace std;
int main(){
	____(1)_____;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	max=a[0];
	min=a[0];
	for(____(2)_____){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	cout<<max<<" "<<min;
	return 0;
}
1.横线(1)处应该填写的代码是(     )
A int n,a[101],min,max
B int n,a[51],min,max
C int n,a[101],min,max,i
D int n,a[51],min,max,i
答案：


2.横线(2)处填写的代码正确且执行循环次数的是(     )
A i=0;i<n;i++ B i=1;i<n;i++  C i=0;i<=n;i++  D i=1;i<=n;i++
答案：


二：程序编写题

题目名称：陶陶摘苹果
题目描述：陶陶家的院子里有一棵苹果树，每到秋天树上就会结出10个苹果。苹果成熟的时候，陶陶就会跑去摘苹果。陶陶有个30厘米高的板凳，当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。
现在已知10个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，请帮陶陶算一下她能够摘到的苹果的数目。假设她碰到苹果，苹果就会掉下来。
输入描述：包括两行数据。第一行包含10个100到200之间(包括100和200)的整数(以厘米为单位)分别表示10个苹果到地面的高度，两个相邻的整数之间用一个空格隔开。第二行只包括一个100到120之间(包含100和120)的整数(以厘米为单位)，表示陶陶把手伸直的时候能够达到的最大高度。
输出描述：包括一行，这一行只包含一个整数，表示陶陶能够摘到的苹果的数目。

样例输入：
100 200 150 140 129 134 167 198 200 111
110
样例输出：
5
*/

#include<iostream>

using namespace std;

int main() {

    return 0;
}
