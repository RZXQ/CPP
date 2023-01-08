#include <iostream>
#include <cstdio>
using namespace std;
struct  student{
	string name;
	int c,m,e;
};
int main(){
	freopen("jige.in","r",stdin);
	freopen("jige.out","w",stdout);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		student stu;
		cin>>stu.name>>stu.c>>stu.m>>stu.e;
		if(stu.c<60||stu.m<60||stu.e<60){
			continue;
		}else{
			cout<<stu.name<<" "<<stu.c<<" "<<stu.m<<" "<<stu.e<<endl;
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

