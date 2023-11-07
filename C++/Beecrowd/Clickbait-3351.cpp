#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
typedef vector<int>		vi;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;

bool canReachTarget(ll time, const vpll& viewers,ll target){
	ll totalViews=0;
	for(const auto& viewer:viewers){
		ll ai=viewer.F;
		ll bi=viewer.S;
		if(time>=ai)
			totalViews+=(time-ai)/bi+1;
	}
	return totalViews>=target;
}

ll findFirstMoment(const vpll& viewers, ll target){
	ll lf=1, ri=2e18, r=-1;
	while(lf <= ri){
		ll mid=lf+(ri-lf)/2;
		if(canReachTarget(mid,viewers,target)){
			r=mid;
			ri=mid-1;
		}else
			lf=mid+1;
	}
	return r;
}

int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int n;
	ll k;
	cin>>n>>k;
	vpll viewers(n);
	fo(i,n)
		cin>>viewers[i].F>>viewers[i].S;
	ll r=findFirstMoment(viewers,k);
	cout<<r<<"\n";
	return 0;
}
