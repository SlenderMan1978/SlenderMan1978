#include <iostream>
using namespace std;
int main(){
	long long t,n,k,i1,i2,tmp,flag=0,x;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>n>>k>>x;
		tmp=k*(k+1)/2;
		if (tmp>x){
			cout<<"NO"<<endl;
			continue;
		}
		tmp=k*(2*n-k+1)/2;
		if (tmp<x){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
	}
}
