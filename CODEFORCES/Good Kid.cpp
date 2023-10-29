#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n,k,i1,i2,a=1,b[10];
	cin>>n;
	for (i1=0;i1<n;i1++){
		cin>>k;
		for (i2=0;i2<k;i2++){
			cin>>b[i2];
		}
		sort(b,b+k);
		b[0]++;
		for (i2=0,a=1;i2<k;i2++){
			a*=b[i2];
		}
		cout<<a<<endl;
	}
}
