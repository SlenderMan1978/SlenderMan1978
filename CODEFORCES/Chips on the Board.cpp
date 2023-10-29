#include <iostream>
#include <algorithm>
using namespace std;
long long a[300001],b[300001];
int main(){
	long long t,i1,i2,n,sum_a,sum_b,min_a,min_b;
	cin>>t;
	for (i1=0;i1<t;i1++){
		cin>>n;
		sum_a=0;
		sum_b=0;
		min_a=1e9+1;
		min_b=1e9+1;
		for (i2=0;i2<n;i2++){
			cin>>a[i2];
			sum_a+=a[i2];
			min_a=min(min_a,a[i2]);
		}
		for (i2=0;i2<n;i2++){
			cin>>b[i2];
			sum_b+=b[i2];
			min_b=min(min_b,b[i2]);
		}
		if (sum_a+min_b*n>sum_b+min_a*n){
			cout<<sum_b+min_a*n<<endl;
		}
		else {
			cout<<sum_a+min_b*n<<endl;
		}
	}
}
