/*一:补全代码(C++的基本框架)
#include<iostream>
using namespace std;
____(1)__(){
	
	cout << "Hello,World!"<<endl;
	___(2)___;
} 
横线(1)处应该填写的代码是
答案：int main
解析：int main() 主函数是程序的入口,熟练的写出C++的基本框架
横线(2)处应该填写的代码是
答案：return 0;  
return 0 函数的返回值为0,熟练的写出C++的基本框架

二:程序编写题
思路分析：考察同学们对cout语句的使用。根据要求，需要输出表达式3+101*202和它的结果，表达式可以使用cout输出字符串来表示，结果使用cout输出表达式来表示。
*/
#include<iostream>

using namespace std;

int main() {

    cout << "3+101*202=" << 3 + 101 * 202 << endl;
    return 0;
}