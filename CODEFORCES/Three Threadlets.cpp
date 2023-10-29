#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int a[6];
	cin>>t;
	while (t--){
		int tmp1,tmp2,tmp;
		cin>>a[0]>>a[1]>>a[2];
		a[3]=1e9+1;
		a[4]=1e9+1;
		a[5]=1e9+1;
		sort(a,a+6);
		tmp1=__gcd(a[0],a[1]);
		tmp2=__gcd(a[1],a[2]);
		tmp=__gcd(tmp1,tmp2);
		a[0]/=tmp;
		a[1]/=tmp;
		a[2]/=tmp;
		if (a[0]==a[1]==a[2]){
			cout<<"YES"<<endl;
			continue;
		}
		if (a[2]>a[0]*4||((a[2]>a[0]*2)&&(a[1]>a[0]*2))){
			cout<<"NO"<<endl;
			continue;
		}
		int sum=a[0]+a[1]+a[2];
		if ((sum%3)&&(sum%4)&&(sum%5)&&(sum%6)){
			cout<<"NO"<<endl;
			continue;
		}
		if (a[0]!=1){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;	
	}
}
