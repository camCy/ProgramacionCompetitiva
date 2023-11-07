#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
typedef vector<int>		vi;

int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int N,Q,c=1;
	while(cin>>N>>Q&&N&&Q){
		vi n(N);
		fo(i,N){
			cin>>n[i];
		}
		sort(n.begin(),n.end());
		vi q(Q);
		fo(i,Q){
			cin>>q[i];
		}
		cout<<"CASE# "<<c++<<":\n";
		fo(i,Q){	
			auto it=lower_bound(n.begin(),n.end(),q[i]);
			if(it!=n.end()&&*it==q[i]){
				cout<<q[i]<<" found at "<<(it-n.begin()+1)<<"\n";
			}else{
				cout<<q[i]<<" not found\n";
			}
		}
	}
	return 0;
}
