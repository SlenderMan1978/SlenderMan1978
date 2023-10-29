#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m,k,sum;
	cin>>t;
	while (t--){
		sum=0;
		cin>>n>>m>>k;
		if (k==1){
			cout<<1<<endl;
		}
		else if (k==2){
			if (m<=n){
				cout<<m<<endl;
			}
			else{
				cout<<n+m/n-1<<endl;
			}
		}
		else if (k==3){
			if (m<=n){
				cout<<0<<endl;
			}
			else {
				cout<<(m-n)/n*(n-1)+m%n<<endl;
			}
		}
		else if (k>3){
			cout<<0<<endl;
		}
	}
}
