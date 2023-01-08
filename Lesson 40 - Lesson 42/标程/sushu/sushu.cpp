#include <fstream>
#include <cstring>
using namespace std;
ifstream cin("sushu.in");
ofstream cout("sushu.out");
int a[101];
int isPrime[100001];
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=100000;i++){
		if(isPrime[i]==0){
			for(int j=i*2;j<=100000;j+=i){
				isPrime[j]=1;
			}
		}
	}
	int x;
	bool flag = false;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(isPrime[a[i]]==0){
			cout<<a[i]<<" ";
			flag = true;
		}
	} 
	if(flag==false){
		cout<<-1;
	}
	cin.close();
	cout.close();
	return 0;
}

