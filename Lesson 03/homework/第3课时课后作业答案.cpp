/*一：补全代码。
题目描述：实现两个变量值的交换。
#include<iostream>
using namespace std;
int main(){
	int a=3,b=5;
	_______;
	cout << a << " " << b << endl;
	return 0;
}
横线处应填写的代码是
答案：swap(a,b)
解析：考察swap()方法的使用。

二：程序编写题。
思路分析：考察同学们对除法操作的应用。签字笔必须是整数的，把元转化为角1元=10角,则签字笔的价格为(1*10+9)角,小玉总的钱数(a*10+b)角，然后取商即可。
*/

// 答案代码：
#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    b = a * 10 + b;
    cout << b / (1 * 10 + 9) << endl;
    return 0;
}
