#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){

	ios::sync_with_stdio(0);cin.tie(0);
	double a=0.0, b=0.0, c=0.0;
	cin>>a>>b>>c;
	vector <double> d;
	d.pb(a);d.pb(b);d.pb(c);
	sort(d.rbegin(),d.rend());
	if(d[0]>=d[1]+d[2])
		cout<<"NAO FORMA TRIANGULO\n";
	else{

		if((d[0]*d[0])==((d[1]*d[1])+(d[2]*d[2])))
			cout<<"TRIANGULO RETANGULO\n";
		if((d[0]*d[0])>((d[1]*d[1])+(d[2]*d[2])))
			cout<<"TRIANGULO OBTUSANGULO\n";
		if((d[0]*d[0])<((d[1]*d[1])+(d[2]*d[2])))
			cout<<"TRIANGULO ACUTANGULO\n";
		if(d[0]==d[1]&&d[0]==d[2]&&d[1]==d[2])
			cout<<"TRIANGULO EQUILATERO\n";
		if((d[0]==d[1]&&d[1]!=d[2])||(d[0]==d[2]&&d[2]!=d[1])||(d[1]==d[2]&&d[2]!=d[0]))
			cout<<"TRIANGULO ISOSCELES\n";

	}
	return 0;
}
