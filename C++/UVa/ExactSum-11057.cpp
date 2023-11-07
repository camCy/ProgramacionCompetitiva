#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define mp make_pair
#define F first
#define S second
typedef vector<int>		vi;
typedef pair<int, int>	pii;

int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int n;
	while(cin>>n&&n){
		vi a(n);
		fo(i,n)
			cin>>a[i];

		sort(a.begin(),a.end());

		int m;
		cin>>m;

		pii price;
		fo(i,n){
			int diff=m-a[i];
			auto it=find(a.begin()+i+1,a.end(),diff);

			if(it!=a.end()){
				price= mp(min(a[i],*it),max(a[i],*it));
			}
		}

				cout<<"Peter should buy books whose prices are "<<price.F<<" and "<< price.S<<".\n\n";
	} 
	return 0;
}
