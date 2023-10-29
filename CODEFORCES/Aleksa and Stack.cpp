#include <iostream>
using namespace std;
int main(){
	int t,n,k,i1,i2,tmp,flag=0,a[3]={2,3,4};
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>n;
		a[0]=3;
		a[1]=5;
		a[2]=7;
		for (i1=0;i1<n;i1++){
			cout<<a[i1%3]<<' ';
			a[i1%3]+=6;
		} 
		cout<<endl;
	}
}
