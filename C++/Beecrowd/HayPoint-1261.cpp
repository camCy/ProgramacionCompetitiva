#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 


int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int m,n;
	cin>>m>>n;	
	map<string,int>d;
	while(n--){
		fo(i,m){
			string w="";
			int v;
			cin>>w>>v;
			d.insert(pair<string,int>(w,v));
		}
	}
	map<string,int>::iterator it =d.begin();
	for(it;it!=d.end();it++){
		cout<<it->F<<" "<<it->S<<"\n";
	}
	return 0;
}
