/*一：补全代码。
问题名称：判断数正负
问题描述：给定一个整数N，判断其正负。
输入描述：一个整数N。（-109 <= N <= 109）
输出描述：如果N > 0, 输出positive。
如果N = 0, 输出zero
如果N < 0, 输出negative
#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if (___1___){
		cout << "positive" ;
	} else if(___2____){
		cout << "negative";
	} else {
		cout << "zero" ;
	}
}
从下列选项中选择填入横线处的代码是
A a>0    B a<0   C a=0   D  a!=0
（1）答案  A    （2）处答案  B
解析：考察if和else-if 语句 
二：程序编写题。
思路分析：考察分支嵌套的使用。当且仅当只有一门的课程小于60属于1，也就是语文小于60，数学大于60；或者语文大于60，数学小于60，输出1.否则输出0。
答案代码： */
#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a < 60) {
        if (b >= 60) {
            cout << 1;
            return 0;
        }
    }
    if (a >= 60) {
        if (b < 60) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}