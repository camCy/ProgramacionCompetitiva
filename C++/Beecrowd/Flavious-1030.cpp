#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=2;i<=n;i++)

int restante(int n,int k){
	int r=0;
	fo(i,n){
		r=(r+k)%i;
	} 
		return r;
}

int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int T,n,k,c=1;
	scanf("%i",&T);
	while(T--){
		scanf("%i %i",&n,&k);
		printf("Case %i: %i\n",c++,restante(n,k)+1);
	}
	return 0;
}
