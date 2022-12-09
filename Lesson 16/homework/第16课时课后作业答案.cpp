/*
一：补全代码 
题目描述：2008年北京奥运会，A国的运动员参与了n天的决赛项目(1<=n<=17)。
现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。
输入第1行是A国参与决赛项目的天数n，其后n行，每一行是该国某一天获得的金、银、铜牌数目。
输出4个整数，为A国所获得的金、银、铜牌总数及总奖牌数。
#include<iostream>
using namespace std;
int main(){
	int n;//存储天数
	int a,b,c;//分别用来存储每天的金银铜牌数量
	int suma=0,sumb=0,sumc=0;//分别用来存储金银铜牌的总量 
	//用for循环读入每天的金银铜牌数量，并进行统计
	cin>>n;//输入天数 
	for(int i=1;____(1)____;i++){
		cin>>a>>b>>c;
		suma+=a;
		sumb+=b;
		sumc+=c;
	} 
	cout << suma<<" "<<sumb<< " "<<sumc<<" "<<_____(2)_____;
	return 0;
}
1.横线__(1)___处应该填写的代码是(     )
A i<=n    B i<n     C i<=n+1  D i<=n-1
答案：A 
解析：因为i是从1开始的，一共有n天所以要循环n次对每天的奖牌数进行输入和计算，所以i<=n

2.横线__(2)___处应该填写的代码是(     )
A a+b+c
B a+b+c+suma+sumb+sumc
C suma+sumb+sumc
D suma+sumb+sumc-a-b-c
答案：C
解析：通过n次循环以后suma、sumb、sumc里已经分别存储了金牌的总数、银牌的总数、铜牌的总数，要想求所有奖牌的总数量只需将三值相加即可

二：程序编写题

思路分析：考察for循环的使用，要保证循环n次，如果循环变量i从零开始那么for循环的判断条件为i<n;如果从1开始判断条件则为i<=n;,注意做类型转换时要在做除法运算之前
答案代码：
*/
#include<iostream>
#include<iomanip>//保留指定小数位的头文件
using namespace std;
int main(){
	int a,b,sum=0;//sum用来求和 
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> b;//输入年龄 
		sum += b;
	} 
	cout << fixed << setprecision(2) << double(sum)/n ;//做除法运算前进行强制类型转换确保得到含有小数位的值 
	return 0;
}
