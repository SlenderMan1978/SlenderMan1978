#include <iostream>
using namespace std;
int a[200001],b[200001][200];
int main(){
	int t,n,k,i1,i2,tmp=0x7fffffff,flag=0,q,l,r,mid,left;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>n;
		for (i1=0;i1<n;i1++){
			cin>>a[i1];
		}
		for (i1=0;i1<n;i1++){
			tmp=0x7fffffff;
			for (i2=i1;i2<n;i2++){
				tmp=tmp&a[i1];
				b[i1][i2]=tmp;
			}
		}
		cin>>q;
		while (q--){
			r=n;
			tmp=0x7fffffff;
			cin>>l>>k;
			left=l-1;
			while (left!=r-1){
				mid=(left+r)/2;
				if (k>b[l][mid]){
					r=mid;					
				}
				else {
					left=mid;
				}
			}
			cout<<endl<<r<<' ';
		}
		cout<<endl;
	}
}
