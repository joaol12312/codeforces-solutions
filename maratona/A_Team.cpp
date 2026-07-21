#include <bits/stdc++.h>
using namespace std;

int resolver() {
    string n;
    getline(cin,n);
    stringstream nn(n);
    int numero;
    int soma=0;
    for(;nn >> numero;){
        soma+=numero;
    }
    if(soma>1){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    // Otimizacao de E/S para maratona
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();
    int total=0;
    // cin >> t; // Descomente se o problema tiver multiplos casos de teste
    while (t--) {
        total+= resolver();
    }
    cout << total;

    return 0;
}