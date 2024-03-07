#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
typedef vector<int>		vi;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t=0;
	cin>>t;
	while(t--){
		int n,cont=0;
		string s,f;
		cin>>n>>s>>f;
		if(s==f)cout<<cont<<"\n";
		else{
				fo(i,n){
					if(s[i]!=f[i]){

						if(f[i]==s[i+1] && f[i+1]=='1' && s[i+1]=='0'){
							swap(s[i],s[i+1]);
							cont++;
						}else if(f[i]=='1' && (s[i+1]=='1' && f[i+1]=='0')){
							swap(s[i],s[i+1]);
							cont++;
						}else{
							s[i]=f[i];
							cont++;
						}
					}
				}
				cout<<cont<<"\n";
			}
		}
	return 0;
}
