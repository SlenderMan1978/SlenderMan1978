#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string str;
	string tmp;
	string s;
	cin>>t;
	int n,m;
	int b=0,flag=0;
	while(t--){
		b=0;
		flag=0;
		cin>>n>>m;
		cin>>str;
		cin>>s;
		while (str.length()<s.length()){
			str=str+str;
			b++;
		}
		for (int i=0;i<=str.length()-s.length();i++){
			int k=0;
			for(int j=0;j<s.length();j++){
				
				if (str[i+j]==s[j]){
					k++;
				}
				else {
					break;
				}
				if (k==s.length()){
					flag=1;
				}
			}
		}
		if (flag){
			cout<<b<<endl;
			continue;
		}
		else {
			str=str+str;
			b++;
		}
		for (int i=0;i<=str.length()-s.length();i++){
			int k=0;
			for(int j=0;j<s.length();j++){
				if (str[i+j]==s[j]){
					k++;
				}
				else {
					break;
				}
				if (k==s.length()){
					flag=1;
				}
			}
		}
		if (flag){
			cout<<b<<endl;
		}
		else {
			cout<<-1<<endl;
		}		
	}
} 
