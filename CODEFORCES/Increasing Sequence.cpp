#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,n,i1,i2,a[101],b[101],i3;
	cin>>t;
	for (i1=0;i1<t;i1++){
		cin>>n;
		for (i2=0;i2<100;i2++){
			b[i2]=i2+1;
		}
		for (i2=0;i2<n;i2++){
			cin>>a[i2];
		}
		for (i2=0;i2<n;i2++){
			if (a[i2]==b[i2]&&i2==0){
				b[i2]++;
				continue;
			}
			if(i2!=0){
				b[i2]=b[i2-1]+1;
			}
			if (b[i2]==a[i2]&&i2!=0){
				b[i2]++;
			}
		}
		cout<<b[n-1]<<endl;		
	}
}
