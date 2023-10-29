#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int t,a,b,i1,i2,k;
	double c;
	double tmp;
	vector<int> vec;
	cin>>t;
	for (i1=0;i1<t;i1++){
		cin>>a>>b>>c;
		if (a==b){
			vec.push_back(0);
		}
		else{
			tmp=(a+b)/2.0;
			tmp=fabs(tmp-a);
			tmp/=c;
			if (tmp-(int)tmp>0){
				k=(int)tmp+1;
			}
			else {
				k=(int)tmp;
			}
			vec.push_back(k);
		}
	}
	for (i1=0;i1<t;i1++){
		cout<<vec[i1]<<endl;
	}
}
