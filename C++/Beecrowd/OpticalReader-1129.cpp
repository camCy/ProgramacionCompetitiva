#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
typedef vector<int> vi;


int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int n;
	while(cin>>n && n!=0){
		int a,b,c,d,e;
		char respuesta;
		fo(i,n){
			int cont=0;
			vi s;
			cin >> a >> b >> c >> d >> e;
			s.pb(a);s.pb(b);s.pb(c);s.pb(d);s.pb(e);
			for(int j = 0; j<s.size() ;++j){
				if(s[j]<=127){
					respuesta='A'+j;
					cont++;
				}
			}
			if(cont>1||(a>127&&b>127&&c>127&&d>127&&e>127)) cout<<"*\n";
			else cout<<respuesta<<"\n";
		}
	}
	return 0;
}
