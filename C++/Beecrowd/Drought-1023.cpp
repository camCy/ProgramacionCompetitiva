#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef pair<int, int>	pii;
typedef vector<pii>		vpii;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int count=0,n;

	while(cin>>n&&n){
		if(count!=0)cout<<"\n";
		vpii a;
		int totalx=0,totaly=0;
		fo(i,n){
			int x,y;
			cin>>x>>y;
			totalx+= x;
			totaly+= y;
			bool f = 0;
			for(auto& p: a){
				if(p.F==y/x){
					p.S+=x;
					f=1;
					break;
				}
			}
			if(!f) a.emplace_back(y/x,x);
		}
			count++;
			cout<<"Cidade# "<<count<<":\n";
			sort(a.begin(),a.end());
			for(auto i=a.begin();i!=a.end();i++){
				if(*i==a.back())cout<<i->S<<"-"<<i->F<<"\n";
				else cout<<i->S<<"-"<<i->F<<" ";
			}
			cout<<"Consumo medio: "<<fixed<<setprecision(2)<<floor(100*(float)totaly/totalx)/100<<" m3.\n";
		}
	return 0;
}

