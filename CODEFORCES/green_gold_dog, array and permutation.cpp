#include <bits/stdc++.h>
using namespace std;
pair<int,int> a[40001];
int b[40001];
int main(){
	int t,n,i1,i2,k;
	cin>>t;
	for (i1=0;i1<t;i1++){
		scanf("%d",&n);
		for (i2=0;i2<n;i2++){
			scanf("%d",&k);
			a[i2]={k,i2};			
		}
		sort(a,a+n);
		for(int i = 0;i<n;i++){
			b[a[i].second]=n-i;
		}
		for(int i = 0;i<n;i++){
			cout<<b[i]<<' ';
		}
		cout<<endl;
	}
}

