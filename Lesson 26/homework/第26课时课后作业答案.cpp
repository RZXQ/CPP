/*一：补全代码 
题目描述：鹏鹏的班上一共有n个学生。刚好每个同学的身高互不相同。鹏鹏想知道，所有同学中身高第二高的是谁。
输入描述：输入共两行，第一行有一个整数 n（2≤n≤100），表示有 n 个学生。第二行有 n 个用空格分开的整数 a1，……， an，
依次表示每个同学的身高。ai 是不超过 200 的正整数。 
输出描述：输出为两个整数，中间用空格隔开， 分别表示身高第二高的同学的编号和身高。

#include<iostream>
using namespace std;
int main(){
	int n;            
	int arr[100]; 
	int max1=0,max2=0; 
	int index1=1,index2=1;  
	cin>>n;               
	for(int i=1;i<=n;i++)           
	{
		cin>>arr[i];    
		if(arr[i]>max1){       
		    max2=max1;    
			max1=arr[i];  
			____(1)____ ; 
			____(2)____ ;      
		}else if(arr[i]>max2){   
			max2=arr[i];         
			index2 = i;       
		}
	}
	cout<<index2<<' '<<max2;
	return 0;
}

1.横线(1)处应该填写的代码是(     )
A index2 = index1 B index1 = i  C index1 = index2  D i=index1
答案：A
解析：题目要求输出第二大值和第二大值的编号，所以求编号和求第二大值的逻辑一样，首先需要分情况讨论，
在输入的数字>max1时，需要同时更新max1的编号和max2的编号,且注意更新顺序，需要先更新max2的编号,所以答案是A。

2.这段(2)代码的输出结果是(     )
A index2 = index1 B index1 = i  C index1 = index2  D i=index1
答案：B
解析：题目要求输出第二大值和第二大值的编号，所以求编号和求第二大值的逻辑一样，首先需要分情况讨论，在输入的数字>max1时，
需要同时更新max1的编号和max2的编号,且注意更新顺序，需要先更新max2的编号,再更新max1的编号，所以答案是B。

二：程序编写题

思路分析：该题通过双重for循环输入二维数组，然后遍历数组找到最小值，记录下来最小值的行下标和列下标，输出最小值以及行号和列号，
注意下标和行号以及列号相差1。
答案代码：*/

#include<iostream>

using namespace std;

int main() {
    int n, m, arr[100][100];
    int min, row, col;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    min = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << min << ' ' << row + 1 << ' ' << col + 1;
    return 0;
}
 

