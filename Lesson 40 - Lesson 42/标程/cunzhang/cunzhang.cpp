#include <fstream>  
#include <algorithm>   
#include <string>  
using namespace std;  
ifstream cin("cunzhang.in");
ofstream cout("cunzhang.out");  
struct sheep{  
    int number;  
    string name;  
    int ticket;  
};  
bool cmp(sheep a,sheep b){  
    return a.ticket>b.ticket;  
}  
int main(){  
	sheep get[3]={{1,"Ï²ÑòÑò",0},{2,"ÀÁÑòÑò",0},{3,"ÃÀÑòÑò",0}};  
	int a,n;
	cin>>n;  
	for(int i=0;i<n;i++){  
    	cin>>a;  
    	if(a==1){  
        	get[0].ticket++;  
    	}  
    	if(a==2){  
       	 	get[1].ticket++;  
    	}  
    	if(a==3){  
        	get[2].ticket++;  
    	}  
	}  
	sort(get,get+3,cmp);  
	for(int i=0;i<3;i++){  
    cout<<get[i].number<<" "<<get[i].name<<" "<<get[i].ticket<<endl;  
	}  
	cin.close();
	cout.close();
	return 0;  
} 
