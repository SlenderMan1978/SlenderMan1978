#include <bits/stdc++.h>
using namespace std;
struct people{
	int a,b;
};
bool cmp(people c,people d){
	return c.b<d.b;
}
int main(){
	long long t,n,p,num=0,sum=0;
	bool bo=0;
	people re[100001];
	cin>>t;
	while (t--){
		cin>>n>>p;
		num=0;
		sum=0;
		bo=0;
		for (int i=0;i<n;i++){
			cin>>re[i].a;
		}
		for (int i=0;i<n;i++){
			cin>>re[i].b;
		}
		sort(re,re+n,cmp);
		for (int i=0;i<n&&num<n;i++){
			if (re[i].b<p){
				if (bo==0){
					sum+=p;
					bo=1;
				}
				for (int k=0;num<n;num++,k++){
					if (k==re[i].a){
						break;
					}
					sum+=re[i].b;
				}
				if (num==n){
					sum-=re[i].b;
				}
			}
			else {
				break;
			}
		}
		if (num!=n){
			if (num==0){
				sum+=p*(n-num);
			}
			else {
				sum+=p*(n-num-1);
			}			
		}		
		cout<<sum<<endl;
	}
}
