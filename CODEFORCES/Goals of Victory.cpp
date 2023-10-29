#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t,n,a,sum=0;
	cin>>t;
	while(t--){
		cin>>n;
		sum=0;
		for (int i=1;i<n;i++){
			cin>>a;
			sum+=a;
		}
		cout<<-sum<<endl;
	}
}
