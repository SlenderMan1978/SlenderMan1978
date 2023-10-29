#include <bits/stdc++.h>
using namespace std;
char a[100001];
struct res{
	int length;
	int ones=0;
};
res re[100001];
int main(){
	int t,n,i1,i2,tmp,i3;
	cin>>t;
	for (i1=0;i1<t;i1++){
		cin>>n;
		cin>>a;
		re[i1].length=n+1;
		for (i2=0,n=n-1;i2<n;i2++,n--){
			if (a[i2]==a[n]){
				re[i1].ones+=2; 
			}
		}
	}
	for (i1=0;i1<t;i1++){
		if (re[i1].length%2){
			re[i1].ones++;
		}
		else {
			re[i1].ones+=2;
		}
		for (i2=0;i2<re[i1].length;i2++){
			if (i2==re[i1].length/2-re[i1].ones/2){
				for (i3=0;i3<re[i1].ones;i3++,i2++){
					if (re[i1].length%2==0){
						cout<<1;
					}
					else {
						if ((re[i1].length/2-re[i1].ones/2)%2==0){
							if (i2%2==0){
								cout<<1;
							}
							else{
								cout<<0;
							}
						}
						else {
							if (i2%2==1){
								cout<<1;
							}
							else{
								cout<<0;
							}
						}
					}
				}
			}
			if (i2==re[i1].length){
				break;
			}
			cout<<0;
		}
		cout<<'\n';
	}
}
