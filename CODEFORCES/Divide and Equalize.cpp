#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
   if(num==1||num==4) 
      return 0;
   if(num==2||num==3)
      return 1;
   if(num %6!= 1&&num %6!=5)
      return 0 ;
   int tmp =sqrt(num);
   for(int i=5;i<=tmp;i+=6) {       
      if(num%i==0||num%(i+2)==0)  
         return 0 ;
   }    
    return 1 ;
}
set<int> s;
int prime[10000]={0};
void p(){
	prime[0]=2;
	int k=1;
	for (int i=3;i<1000001;i+=2){
		if (isPrime(i)){
			prime[k]=i;
			k++;
		}
	}
} 
int b[1000001];
int main(){
	int t,n,a[10001],ma=0;
//	p();
	cin>>t;
	while (t--){
		cin>>n;
		ma=0;
		memset(b,0,sizeof(b));
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		for (int j=0;j<n;j++){
			for (int i=2;i*i<=a[j];){
				if (a[j]%i==0){
					a[j]/=i;
					b[i]++;
					s.insert(i);
				}
				else{
					i++;
				}
			}
			if (a[j]!=1){
				s.insert(a[j]);
				b[a[j]]++;
			}			
		}
		if (b[2]%n){
			cout<<"NO"<<endl;
			continue;
		}
		auto it=s.begin();
		for (;it!=s.end();it++){
			if (b[*it]%n){
				cout<<"NO"<<endl;
				break;
			}
		}
		if (it==s.end()){
			cout<<"YES"<<endl;	
			continue;
		}
//		cout<<*it<<endl;
		s.clear();		
	}
}
