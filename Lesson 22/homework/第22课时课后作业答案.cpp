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
答案：C
解析：题目中说明N的最大值是100，所以数组的长度需要大于100，其次for循环中使用了变量i，但是没有声明，所以答案是C

2.横线(2)处填写的代码正确且执行循环次数的是(     )
A i=0;i<n;i++ B i=1;i<n;i++  C i=0;i<=n;i++  D i=1;i<=n;i++
答案：B
解析：代码中将a[0]赋值给max和min,因此只需要从a[1]开始，与max和min相比较，并更新，只需要比较n-1次，所以答案是B。


二：程序编写题

思路分析：该题目需要使用一维数组存储每一个苹果的高度，然后用淘淘站在板凳上的身高去和苹果的高度作比较，如果淘淘站在板凳上的高度比苹果高度大，那么淘淘就可以摘到苹果。
答案代码：*/

#include<iostream>

using namespace std;

int main() {
    int appleh[10], benchh, taoh, bentaoh, i;
    benchh = 30;    //板凳的高度
    for (i = 0; i < 10; i++) {  //循环输入苹果的高度
        cin >> appleh[i];
    }
    cin >> taoh;     //输入淘淘的高度
    bentaoh = benchh + taoh;    //淘淘站在板凳上的高度
    int n = 0;
    for (i = 0; i < 10; i++) {  //判断能否摘到苹果
        if (appleh[i] <= bentaoh) {
            n++;    //如果能够摘到苹果计数加一
        }
    }
    cout << n;
    return 0;
}

