#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
typedef vector<int>		vi;
int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	vi l1(5);
	vi l2(5);
	bool a=0;

	fo(i,5)
		cin>>l1[i];
	fo(i,5)
		cin>>l2[i];

	fo(i,5){
		if(l1[i]==l2[i]){
			a=0;
			break;
		}else
			a=1;
	}
	char res= (a==1) ? 'Y':'N';
 
	cout<<res<<"\n";
	return 0;
}
