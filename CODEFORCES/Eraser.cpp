#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int t,n,k,i1,i2,i3,sum=0;
	string str;
	cin>>t;
	for(i1=0;i1<t;i1++){
		cin>>n>>k;
		cin>>str;
		for (i2=0,sum=0;i2<n;i2++){
			if (str[i2]=='B'){
				sum++;
				for (i3=0;i3<k&&i2+i3<n;i3++){
					str[i2+i3]='W';
				}
			}						 
		}
		cout<<sum<<endl;		 
	}
}
