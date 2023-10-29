#include <iostream>
#include <algorithm>
using namespace std;
struct people{
	int num;
	int s,e;
};
bool cmp(people a,people b){
	return a.e<b.e;
}
int main(){
	int t,i1,i2,s,e,t1;
	bool flag=0;
	people p[101];
	cin>>t1;
	for (i2=0;i2<t1;i2++){
		cin>>t;
		for (i1=0;i1<t;i1++){
			p[i1].num=i1+1;
			cin>>p[i1].s>>p[i1].e;
		}
		stable_sort(p,p+t,cmp);
		for (i1=0;i1<t;i1++){
			if (p[i1].num==1){
				s=p[i1].s;
				e=p[i1].e;
				flag=1;
				continue;
			}
			if (flag&&p[i1].s>=s){
				cout<<-1<<endl;
				break;
			}
		}
		if (i1==t){
			cout<<s<<endl;
		}
		flag=0;		
	}		
}
