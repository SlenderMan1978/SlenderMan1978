#include <bits/stdc++.h>
using namespace std;
struct Array{
	int index;
	int value;
};
Array a[100001];
bool cmp(Array c,Array d){
	return c.value>d.value;
}
int main(){
	long long n,sum=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].value;
		a[i].index=i;
	}
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j+=i){			
			if (a[j].value>a[i].value){
				a[i].value=a[j].value;
			}
		}
	} 
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n;i++){
		long long tmp=1;
		for (int j=0;j<(n-i)>>4;j++){
			tmp%=998244353;
			tmp=tmp<<16;
		}
		for (int j=0;j<(n-i)%16;j++){
			tmp=tmp<<1;
			tmp%=998244353;
		}
		sum+=((a[i].value%998244353)*tmp)%998244353;
		sum%=998244353;
	}
	cout<<sum<<endl;
}
