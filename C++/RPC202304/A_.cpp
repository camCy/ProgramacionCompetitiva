#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
typedef vector<int>		vi;

int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int n,k,x;
	cin>>n>>k>>x;
	vi s(n);
	fo(i,n){
		int aux;
		cin>>aux;
		s[i]=aux;
	}
	sort(s.begin(),s.end());
	double sum=0;
	for(int i=k;i<n-k;++i){
		sum+=s[i];
	}
	double dif_min=sum/(n-k*2.0);

	cout<<fixed<<setprecision(10)<<abs(x-dif_min)<<"\n";
	return 0;
}
