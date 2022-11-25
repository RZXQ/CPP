/*
一：单选题
1.设a=3,b=5,c=5，逻辑表达式(a||b+c && b-c)的结果为（  ）
A.0   B.1

答案：B
解析：&&的优先级比||高，所以先计算&&再计算||，因为||前边a的值为3代表真，又因为做||运算的时候只要有一值为真结果即为真，所以整个判断式的结果为真即1

2.对某产品征收税金，在产值1万元以上收税5%；在1万元以下但在5000元或者以上的征收税3%；
在5000元以下但在1000元或以上征收税2%；1000元以下的免收税。输出该产品的收税金额
#include<iostream> 
using namespace std;
int main(){
	double money,tax;
	tax=0;
	cin>>money;
	if(money>10000){
		tax=money*0.05;
	}
	else if(money>=5000){
		tax=money*0.03;
	}
	else if(_________){
		tax=money*0.02;
	}
	cout<<tax<<endl;
	return 0;
}
横线处应该填写的代码是(     )
A money>1000 B money<1000  C money<=1000  D money>=1000
答案：D
解析：程序是从大到小划分的产值范围，最后一个收税的范围是在5000元以下但在1000元或以上征收税，因为前面两个if已经对大于等于5000的部分进行了判断，横线部分要大于1000并且包括1000，所以填入money>=1000即可

二：程序编写题
思路分析：晶晶每周的1、3、5任意一天都不能去约会，注意YES和NO都是大写字母！
答案代码：*/

#include<iostream>

using namespace std;

int main() {
    int date;
    cin >> date;
    if (date == 1 || date == 3 || date == 5) {//1、3、5都不能去所以是或
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
