#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
typedef vector<int>		vi;
typedef vector<vi>		vvi;

int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	string s;
	cin>>s;
	vvi charIndx(52);

	fo(i,s.size()){
		char c=s[i];
		int indx=isupper(c)? c - 'A' : c - 'a'+26;
		charIndx[indx].pb(i);
	}
	int Q;
	cin>>Q;
	cin.ignore();

	while(Q--){
		string ss;
		getline(cin,ss);
		int start=-1,end=-1;
		int ls=-1;
		bool matched=1;
		for(char c: ss){
			int indx=isupper(c)? c - 'A' : c - 'a'+26;
			auto it=upper_bound(charIndx[indx].begin(),charIndx[indx].end(),ls);
			if(it==charIndx[indx].end()){
				matched=0;
				break;
			}
			ls=*it;
			if(start==-1)
				start=ls;
			end=ls;
		}
		if(matched)
			cout<<"Matched "<<start<<" "<<end<<"\n";
		else
			cout<<"Not matched\n";
	}
	return 0;
}
