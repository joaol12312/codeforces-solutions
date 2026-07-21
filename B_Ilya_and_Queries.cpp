#include <bits/stdc++.h>
using namespace std;

void resolver(const vector<int> lista) {
        int c,d;
        int conta=0;
        cin >> c >> d;
        conta=lista[d-1]-lista[c-1];
        cout << conta <<"\n";
}

int main() {
    // Otimizacao de E/S para maratona
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string palavra;
    cin >> palavra;
    vector<char>lista1(palavra.begin(),palavra.end());
    vector<int>lista(lista1.size()+1,0);
    for (int i=1;i<lista1.size();i++){
        if (lista1[i-1]==lista1[i]){
            if(i==0){
                lista[i]=1;
            }else{
                lista[i]=lista[i-1]+1;
            }
        }else{
            if(i!=0){
            lista[i]=lista[i-1];
        }
        }
    }
    int t;
    cin >> t;
    // cin >> t; // Descomente se o problema tiver multiplos casos de teste
    while (t--) {
        resolver(lista);
    }

    return 0;
}