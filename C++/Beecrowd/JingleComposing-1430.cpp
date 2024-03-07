#include<bits/stdc++.h>
using namespace std;

int main() {
  
    map<char,double> cd;
    cd['W'] = 1;
    cd['H'] = 0.5;
    cd['Q'] = 0.25;
    cd['E'] = 0.125;
    cd['S'] = 0.0625;
    cd['T'] = 0.03125;
    cd['X'] = 0.015625;
    string comp;
    while(cin>>comp && comp!="*"){
        int final = 0;
        int cont = 0;
        for(int i = 1; i< comp.size(); i++){
            double parcial=0.0;
            string aux;
            if(comp[i]=='/'){
                aux = comp.substr(i-cont ,cont);
                for(int j=0; j<aux.size(); j++){ 
                    if(parcial+cd[aux[j]]>1.0)parcial=0;
                    else parcial+=cd[aux[j]];
                }
                final+=parcial;
                cont = 0;
            }
            cont++;
        }
        cout<<final<<"\n";
    }
   
    
    return 0;
}
