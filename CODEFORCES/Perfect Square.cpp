#include <bits/stdc++.h>
using namespace std;
char c[1001][1001];
int main(){
	int t,n,sum=0;
	char ma;
	cin>>t;
	while (t--){
		cin>>n;
		sum=0;
		for (int i=0;i<n;i++){
			cin>>c[i];
		}
		int tmp=n/2;
		for (int i1=0;i1<tmp;i1++){
			for (int i2=0;i2<tmp;i2++){
				ma=max(c[i1][i2],c[i2][n-1-i1]);
				ma=max(ma,c[n-1-i2][i1]);
				ma=max(ma,c[n-1-i1][n-1-i2]);
				sum+=ma-c[i1][i2]+ma-c[i2][n-1-i1]+ma-c[n-1-i2][i1]+ma-c[n-1-i1][n-1-i2];
			}
		}
		cout<<sum<<endl;		
	}
}
