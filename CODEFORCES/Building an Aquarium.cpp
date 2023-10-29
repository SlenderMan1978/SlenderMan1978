#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int t,n,x,a[200000],i1,i2,ma,l,r,sum=0;
	cin>>t;
	for (i1=0;i1<t;i1++){
		cin>>n>>x;
		for (i2=0;i2<n;i2++){
			cin>>a[i2];
		}
		l=0;
		r=x;
		while (l!=r){
			for (i2=0,sum=0;i2<n;i2++){
				if (a[i2]<(r+l)/2){
					sum+=(r+l)/2-a[i2];
					if (sum>=x){
						r=(l+r)/2;
						break;
					}
				}
			}
			if (i2==n){
				l=(l+r)/2+1;
			}
		}
		for (i2=0,sum=0;i2<n;i2++){
			if (a[i2]<r){
				sum+=r-a[i2];
				if (sum>x){
					r--;
					break;
				}
			}
		}
		if (sum<x){
			r++;
			for (i2=0,sum=0;i2<n;i2++){
				if (a[i2]<r){
					sum+=r-a[i2];
					if (sum>x){
						r--;
						break;
					}
				}
			}
		}
		cout<<r<<endl;
	}	
}
 
