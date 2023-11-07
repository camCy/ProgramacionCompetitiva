#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
typedef vector<int>		vi;

int caseA(vi& he, int luchu){
	int lf=0;
	int ri=he.size()-1;
	int a=-1;

	while(lf<=ri){
		int mid=lf+(ri-lf)/2;
		if(he[mid]>=luchu){
			ri=mid-1;
		}else{
			a=he[mid];
			lf=mid+1;
		}
	}
	return a;
}

int caseB(vi& he,int luchu){
	int lf=0;
	int ri=he.size()-1;
	int b=-1;
	while(lf<=ri){
		int mid=lf+(ri-lf)/2;
		if(he[mid]<=luchu){
			lf=mid+1;
		}else{
			b=he[mid];
			ri=mid-1;
		}
	}
	return b;
}
int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int N,Q;
	cin>>N;
	vi he(N);
	fo(i,N)
		cin>>he[i];

	cin>>Q;
	fo(i,Q){
		int luchu;
		cin>>luchu;
		int a=caseA(he,luchu);
		int b=caseB(he,luchu);

		if(a==-1)
			cout<<"X ";
		else
			cout<<a<<" ";

		if(b==-1)
			cout<<"X\n";
		else
			cout<<b<<"\n";
	}
	return 0;
}
