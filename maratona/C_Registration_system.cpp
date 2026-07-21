#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int n;
    string nome;
    cin >> n;
    cin.ignore();
    map<string,int>dic;
    for (int i=0;i<n;i++){
        cin >> nome;
        if (dic.count(nome)){
            dic[nome]++;
            cout<<nome<<dic[nome]<<"\n";
        }else{
            dic[nome]=0;
            cout<<"OK"<<"\n";
        }
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