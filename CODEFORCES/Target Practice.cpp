#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int a[10][10],i1,i2,sum=0;
	string str[10];
	for (i1=0;i1<10;i1++){
		for (i2=0;i2<10;i2++){
			if (i1==0||i2==0||i1==9||i2==9){
				a[i1][i2]=1;
			}
			else if(i1==1||i2==1||i1==8||i2==8){
				a[i1][i2]=2;
			}
			else if(i1==2||i2==2||i1==7||i2==7){
				a[i1][i2]=3;
			}
			else if(i1==3||i2==3||i1==6||i2==6){
				a[i1][i2]=4;
			}
			else if(i1==4||i2==4||i1==5||i2==5){
				a[i1][i2]=5;
			}									
		}
	}
	int n;
	cin>>n;
	for (i1=0;i1<n;i1++){
		for (i2=0;i2<10;i2++){
			cin>>str[i2];
		}
		for (i2=0,sum=0;i2<10;i2++){
			for (int i3=0;i3<10;i3++){
				if (str[i2][i3]=='X'){
					sum+=a[i2][i3];
				}
			}
		}
		cout<<sum<<endl;
	}
}
