#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int l[200001],r[200001];
int main(){
	int t,n,k,i1,i2,tmp,flag=0,q,a,b,x;
	cin>>t;
	string word;
	for (int i=0;i<t;i++){
		cin>>n>>k;
		cin>>word;
		for (i1=0;i1<k;i1++){
			cin>>l[i1];
		}
		for (i1=0;i1<k;i1++){
			cin>>r[i1];
		}
		cin>>q;
		while(q--){
			cin>>x;
			int y=upper_bound(a,a+k,x);
			a=min(x,l[y]+r[y]-x);
			b=max(x,l[y]+r[y]-x);
//			reverse(word.begin()+a,word.begin()+b);
		}
		cout<<word<<endl;
	}
}
