/*一：补全代码。
问题名称：闰年平年的判断。
问题描述：输入一年的总天数，判断这一年是平年还是闰年。
#include<iostream>
using namespace std;
int main(){
	int n;
	cin n;
	if(______){
		cout << "平年";
	}else{
		cout << "闰年";
	}
	return 0;
}
横线处填写的代码是：
A n=365   B n==365    C n!=365
答案：B
解析：if() 需要填入表达式，根据cout语句的输出，可以得出它判断的输入n是否为365。
二：程序编写题。
思路分析：考察if语句和else-if 语句。需要对输入的x进行分情况讨论，易错点不要直接使用数学中的0<=x<5，需要用我们所学的逻辑运算符进行连接。 
答案代码：   */
#include<iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    if (x >= 0 && x < 5) {
        y = -1 * x + 2.5;
    } else if (x < 10) {
        y = 2 - 1.5 * (x - 3) * (x - 3);
    } else if (x < 20) {
        y = x / 2 - 1.5;
    }
    return 0;
}
