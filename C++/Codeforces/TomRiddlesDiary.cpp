#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair


int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	vector<string> vs;
	bool rep;
	int n=0;
	cin>>n;
	cin.ignore();
	fo(i,n){
		rep=false;
		string aux="";
		getline(cin,aux);
		vs.pb(aux);
		fo(j,i){
			if(vs[i]==vs[j]){
				rep=true;
				break;
			}
		}
		if(rep)cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}
