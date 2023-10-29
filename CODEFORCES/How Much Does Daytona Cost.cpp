#include <iostream>
using namespace std;
int main(){
	int t,n,k,i1,i2,tmp,flag=0;
	cin>>t;
	for (int i=0;i<t;i++){
		flag=0;
		cin>>n>>k;
		for (i1=0;i1<n;i1++){
			cin>>tmp;
			if (tmp==k){
				flag=1;
			}
		}
		if (flag){
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
}
