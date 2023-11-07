#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)

typedef long long ll;
typedef vector<ll>		vll;

ll binarySearch(vll arr){
	int n = arr.size();
	int lf = 0, ri = n-1;
	ll sum1 = arr[lf], sum3=arr[ri];
	ll maxSum=0;

	while(lf <= ri){
		if(sum1==sum3){
			maxSum = sum1;
			ri--;
			sum3 += arr[ri];
		}else if(sum1 < sum3){
			lf++;
			sum1 += arr[lf];
		}else{
			ri--;
			sum3 += arr[ri];
		}
	}
	return maxSum;
}

int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	int n;
	cin>>n;
	vll arr(n);
	fo(i,n)
		cin>>arr[i];
	ll r=binarySearch(arr);
	cout<<r<<"\n";

	return 0;
}
