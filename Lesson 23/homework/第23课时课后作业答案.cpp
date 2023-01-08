/*一：补全代码 
题目描述：有一组序列的数是：1、2、9、33、126、477，……，请同学们认真观察数值的规律。现要求：指定项数为任意的N项，计算：
1）第N项的数据；
2）输出前N项数据的和。
输入描述：
输入中只有一行，包含1个整数N(其中3<=N<=15)为这个序列的项数。
输出描述：
输出共有二行:第一行为这个序列第N项的数据；第二行为这个序列前N项的数据和。
#include<iostream>
using namespace std;
int main(){
	____(1)_____;         
	cin>>n;
	arr[0] = 1;    
	arr[1] = 2;                 
	for(____(2)_____){    
	  	arr[i]=(arr[i-1]+arr[i-2])*3;
	  	sum+=arr[i];
	}
	____(3)_____;
	return 0;
}
1.横线(1)处应该填写的代码是(     )
A int n,arr[16]={0},sum=1
B int n,arr[10]={0},sum=3
C int n,arr[16]={0},sum=2
D int n,arr[16]={0},sum=3
答案：D
解析：题目中说明N的最大值是15，所以数组的长度需要大于15，其次求和是从第3项开始，第一项为1，第二项为2，所以sum的初始值应该是3。

2.横线(2)处填写的代码正确的是(    )
A int i=2;i<=n;i++ B int i=3;i<=n;i++  C int i=2;i<n;i++  D int i=3;i<n;i++
答案：C
解析：代码中将arr[0]=1,arr[1]=2,因此只需要从a[2]开始，i=2，i<n，所以答案是C。

3.横线(3)处填写的代码正确的是(    )
A cout<<arr[n]<<endl<<sum B cout<<arr[n-1]<<endl<<sum  C cout<<arr[i]<<endl<<sum  D cout<<arr[i-1]<<endl<<sum
答案：B
解析：题目中的数是从下标0开始存储的，所以输出的是arr[n-1],答案是B。

二：程序编写题
 
思路分析：该题是一维数组的应用，通过给数组的元素赋不同的值模拟不同的实际状态，首先将范围内的数组元素都赋值为0，代表该区域有树，然后移走时，将范围内的数组元素更新为-1，最后统计元素为0的个数，也就是剩下的树的个数。
*/
答案代码：
//l表示马路长度  m表示施工区域的数目   s表示开始位置   e表示结束位置
int l, m, s, e;
cin >> l >>
m;
int num = 0;//剩余数的数量
//声明数组arr[10001],0表示种植了树木
int arr[10001] = {};
for(
int i = 0;
i<=
l;
i++){
arr[i] = 0;
}
for(
int i = 0;
i<m;
i++){
cin >> s >>
e;
//循环表示设置在[s,e]区域的树木删除掉，值改为-1
for(
int j = s;
j<=
e;
j++){
arr[j] = -1;
}
}
for(
int i = 0;
i<=
l;
i++){
if(arr[i]==0){
num++;
}
}
cout <<
num;

return 0;
} 