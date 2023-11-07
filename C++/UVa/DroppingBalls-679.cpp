#include<bits/stdc++.h>
using namespace std;

int binarySearch(int D, int I){
	int pos=1;

	for(int i=1 ;i < D; ++i){
	
		if(I%2==0){
			pos=pos*2+1;
			I/=2;
		}else{
			pos*=2;
			I=(I+1)/2;
		}
	}
	return pos;
}

int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int l;
	cin>>l;
	for(int i=0;i<l;++i){
		int D, I;
		cin>>D>>I;
		int r=binarySearch(D,I);
		cout<<r<<"\n";
	}
	return 0;
}
