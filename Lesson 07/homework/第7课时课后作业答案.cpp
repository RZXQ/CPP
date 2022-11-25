/*一：补全代码。
问题名称：求最大值
问题描述：输入三个整数，输出三个整数中的最大值？
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a<b){
		___1___;
	}
	if(a<c){
		____2____;
	}
	cout << a << endl;
	return 0;
}
横线1处填写的代码是：
A a=b    B b=a  , C a=c ,   D  c=a     
答案：A
横线2处填写的代码是：
A c=a    B a=c    C  a=b     D  b=abort
答案：B
解析：变量a最后输出的就是最大值。
二：程序编写题。
思路分析：输入的是一个字符，需要转化为一个整型n，若n%2==0 为true 则为偶数，否则为奇数。
*/
// 答案代码：

#include<iostream>

using namespace std;

int main() {
    char a;
    cin >> a;
    if ((int) a % 2 == 0) {
        cout << "偶数" << endl;
    } else {
        cout << "奇数" << endl;
    }
    return 0;
}
