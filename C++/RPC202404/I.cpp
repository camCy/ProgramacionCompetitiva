#include <bits/stdc++.h>
using namespace std;

int soluciones = 0;
vector<char> pal;

bool valido(vector<char>& candidato){
    for(int i=0; i<candidato.size()-1; ++i){
        if(candidato[i] == candidato[(i + 1)%candidato.size()]){
            return false;
        }
    } 
    return true;
}

void backtrack(vector<char>& candidato, vector<bool>& usado){
    if(candidato.size() == pal.size()){
        if(valido(candidato)) soluciones++;
    }else{
        for(int i = 0; i<pal.size(); ++i){
            if(!usado[i]){
                usado[i] = 1;
                candidato.push_back(pal[i]);
                if(valido(candidato)){
                    backtrack(candidato, usado);
                }
                usado[i] = false;
                candidato.pop_back();
            }
        }
    }
}

int main(){
    int a=0, b=0, c=0;
    vector<pair<char,int>> letras;
    cin>>a>>b>>c;
    vector<char> candidato;
    vector<bool> usado(letras.size(), 0);
    letras.push_back(make_pair('A',a));
    letras.push_back(make_pair('B',b));
    letras.push_back(make_pair('C',c));
    for(auto i: letras){
        for(int j=0; j<i.second;j++){
            pal.push_back(i.first);
        }
    }
    do{
        if(valido(pal)){
            soluciones++;
        }
    }while(next_permutation(pal.begin(),pal.end()));

    cout<<soluciones<<"\n";
    return 0;
}

