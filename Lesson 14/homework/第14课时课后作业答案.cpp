/*
一：补全代码 
题目描述：Sn=1+1/2+1/3+...+1/n。显然对于任意一个整数k，当n足够大的时候，Sn大于k。
现给出一个整数k(1<=k<=15)，要求计算出一个最小的n，使得Sn>k
#include<iostream>
using namespace std;
int main(){
	int k,n=0;
    __(1)___s=0;
    cin>>k;
    n=1;
    do{
        s+=__(2)___;    //1 + 1/2 + 1/3 
        n++;
	}while(s>k);
    cout<<n<<endl;
	return 0;
}

	
1.横线__(1)___处应该填写的代码是(     )
A double B int  C char  D bool
答案：A
解析：sn用来求和，sn要定义成double，不然执行分数求和运算时sn的结果一直是1
2.横线__(2)___处应该填写的代码是(     )
A 1/i
B i
C 1.0/i
D 1.0*i
答案：C
解析：用1.0做隐式类型转换将真分数通过除法运算转化成小数 

二：程序编写题

思路分析：把小球的落地和弹起看作一次循环，循环到第十次的时候，小球停到第10次弹起的状态
答案代码：
*/
#include<iostream>

using namespace std;

int main() {
    double h, m = 0;//m表示经过的米数
    int i = 1;//表示次数
    cin >> h;
    while (i <= 10) {
        m += (h + h / 2);//将落地与反弹的距离加到m中
        h /= 2;
        i++;
    }
    cout << m - h << endl << h;
    return 0;
}
