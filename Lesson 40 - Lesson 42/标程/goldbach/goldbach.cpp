#include<fstream>
#include<cstring>
using namespace std;
ifstream cin("goldbach.in");
ofstream cout("goldbach.out");
bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	for(int i=2;i<n;i++){
		if(isPrime(i)&&isPrime(n-i)){
			cout<<n<<"="<<i<<"+"<<n-i;
			return 0; 
		}
	} 
	
	cin.close();
	cout.close();
	return 0;
}







