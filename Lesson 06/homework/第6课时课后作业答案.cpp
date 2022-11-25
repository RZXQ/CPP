/*一：代码补全
题目名称：计算两数之差的结果为真为假
题目描述：输入两个整数，把他们的差用bool类型的值输出。
输入描述：两个整数中间用空格隔开。
输出描述：一个bool类型的值。
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout << ________ <<endl;
	return 0;
}
横线处填写的代码是：
答案：bool(a-b)
解析：考察强制类型转换的使用。

二：程序编写题。
思路分析：可以使用强制类型转换来实现，向0取整。
*/

// 答案代码：
#include<iostream>

using namespace std;

int main() {
    float a;
    cin >> a;
    cout << (int) a << endl;
    return 0;
}

