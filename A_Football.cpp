#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int j1=0,j2=0;
    bool consegue=false;
    string jogadores;
    getline(cin,jogadores);
    for (char j: jogadores){
        if (j=='0'){
                j1++;
                j2=0;
        }else{
                j1=0;
                j2++;
            }
        if (j1==7 or j2==7){
            consegue=true;
            break;}
        } 
    if(consegue){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    }

int main() {
    // Otimizacao de E/S para maratona
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // Descomente se o problema tiver multiplos casos de teste
    while (t--) {
        resolver();
    }

    return 0;
}