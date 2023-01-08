/* 
一：补全代码 
题目描述：将下面N(1<=N<=100)个数字按照从小到大排序。
#include<iostream>
_____(1)______
using namespace std;
int main(){
	int a[101];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	____(2)_____;
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
1.横线(1)处应该填写的代码是(     )
A #include<iomanip>  B #include<cmath>   C #include<algorithm>   D #include<cstdio> 
答案：C
解析：sort排序函数的头文件是，#include<algorithm>，所以答案是C。

2.横线(2)处应该填写的代码是(     )
A sort(a,a+n) B sort(a,n)  C sort(a,a+n-1)  D sort(a,n-1)
答案：A
解析：sort排序函数的具体写法是，sort(排序的起始位置，排序的结束位置），本题为sort(a,a+n)，所以答案是A。

二：程序编写题

思路分析：定义数组存储年龄，然后循环遍历数组去把年龄进行划分，计算比例。
答案代码：*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int n, m[101], i, a = 0, b = 0, c = 0, d = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> m[i];
    for (i = 0; i < n; i++) {
        if (m[i] > 0 && m[i] <= 18)
            a++;
        else if (m[i] >= 19 && m[i] <= 35)
            b++;
        else if (m[i] >= 36 && m[i] <= 60)
            c++;
        else d++;
    }
    cout << fixed << setprecision(2) << a * 100.0 / n << "%"
         << endl;         //注意int型输出double的计算中常数要保留一位小数点“100.0”而不是“100”
    cout << fixed << setprecision(2) << b * 100.0 / n << "%" << endl;
    cout << fixed << setprecision(2) << c * 100.0 / n << "%" << endl;
    cout << fixed << setprecision(2) << d * 100.0 / n << "%" << endl;
    return 0;
}

