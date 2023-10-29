#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> a;
vector<int> marked;
vector<int> d;
queue<pair<vector<int>,int> > q;
int bfs(int label){
	q.push(make_pair(a[label],0));
	d[label]=-1; 
	while (!q.empty()){
		auto now=q.front();
		auto vec=now.first;
		int step=now.second;
		step++;
		q.pop();
		for (auto i:vec){
			if (d[i]==0){
				q.push(make_pair(a[i],step));
				d[i]=step;
			}
		}
	}
	return 1;
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		a.assign(n+1,vector<int>(0));
		marked.assign(k,0);
		for (auto &i:marked){
			cin>>i;
		}
		for (int i=1;i<n;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		if (k==1){
			cout<<0<<endl;
			a.clear();
			marked.clear();
			continue;
		}
		d.clear();
		d.assign(n+1,0);
		bfs(marked[0]);
		int ma=-1,tmp=-1;
		for (auto i:marked){
			if (d[i]>ma){
				tmp=i;
				ma=d[i];
			}
		}
		d.clear();
		d.assign(n+1,0);
		bfs(tmp);
		ma=-1;
		for (auto i:marked){
			if (d[i]>ma){
				tmp=i;
				ma=d[i];
			}			
		}
		cout<<ma/2+ma%2<<endl;
		a.clear();
		marked.clear();
	}
}
