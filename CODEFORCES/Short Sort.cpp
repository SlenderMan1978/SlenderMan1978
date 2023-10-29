#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
	int t,i1,i2;
	cin>>t;
	string str[10];
	string a="abc";
	for (i1=0;i1<t;i1++){
		cin>>str[i1];
	}
	for (i1=0;i1<t;i1++){
		if (str[i1]=="abc"||str[i1]=="acb"||str[i1]=="bac"||str[i1]=="cba"){
			cout<<"YES"<<endl;
		}
		if (str[i1]=="bca"||str[i1]=="cab"){
			cout<<"NO"<<endl;
		}								
	}
}
