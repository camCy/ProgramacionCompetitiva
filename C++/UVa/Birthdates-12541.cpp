#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back

struct person{
		string name;
		int dd,mm,yy;
		bool operator < (const person & other) const{
			if(yy==other.yy){
				if(mm==other.mm)
					return dd>other.dd;
				return mm>other.mm;
			}	
			return yy>other.yy;
		}
};

int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	vector <person> vp;
	fo(i,t){
		string n="";
		int d=0,m=0,y=0;
		cin>>n>>d>>m>>y;
		vp.pb({n,d,m,y});
	}
	sort(vp.begin(),vp.end());
	cout<<vp[0].name<<"\n"<<vp[t-1].name<<"\n";
	return 0;
}
