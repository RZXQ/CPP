/*一：代码补全。
题目名称：温度表达转化
题目描述：利用公式 C = 5 * (F-32) / 9 （其中C表示摄氏温度，F表示华氏温度） 进行计算转化。
输入描述：输入一行，包含一个实数f，表示华氏温度。（f >= -459.67）
输出描述：输出一行，包含一个实数，表示对应的摄氏温度，要求精确到小数点后5位。
#include<iostream>
#include<____1_____>
using namespace std;
int main(){
	double f,c;
	cin >> f;
	c=5*(f-32)/9;
	cout << ___2__ << ____3___ << c << endl;
	return 0;
}
横线1处应填写的代码是
答案：iomanip

横线2处应填写的代码是
答案：fixed

横线3处应填写的代码是
答案：setprecision(5)

解析：考察如何以小数的形式输出结果，并且保留小数点后面的有效位数。不要忘记需要引入的头文件。

二：程序编写题。
思路分析：等差数列（从第二项开始，每一项与它前一项的差等于同一个常数,公式 an=a1+(n-1)*b），输入的a1,a2为前两项的值，可得出这个常数d=(a2-a1),若要求第n项，只需计算 (n-1)*d 即可。
*/
// 答案代码：

#include<iostream>

using namespace std;

int main() {
    int a1, a2, n, d;
    cin >> a1 >> a2 >> n;
    d = a2 - a1;
    cout << (n - 1) * d << endl;
    return 0;
}



