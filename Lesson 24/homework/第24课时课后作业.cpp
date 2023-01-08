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

2.横线(2)处应该填写的代码是(     )
A sort(a,a+n) B sort(a,n)  C sort(a,a+n-1)  D sort(a,n-1)

二：程序编写题

题目名称：年龄与疾病
题目描述：某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理，按照0-18、19-35、36-60、61以上（含61）四个年龄段统计的患病人数占总患病人数的比例。
输出描述：共2行，第一行为过往病人的数目n（0<n≤100)，第二行为每个病人患病时的年龄。
输出描述：按照0-18、19-35、36-60、61以上(含61)四个年龄段输出该段患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位。每个年龄段占一行，共四行。

样例输入：
10
1 11 21 31 41 51 61 71 81 91
样例输出：
20.00%
20.00%
20.00%
40.00%
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    return 0;
}