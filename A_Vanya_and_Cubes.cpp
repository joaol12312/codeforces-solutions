#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int cont=0;
    int b=1;
    int numero;
    cin >> numero;
    for(int i=1;i<=numero;){
        cont++;
        b+=cont+1;
        i+=b;
    }
    cout << (cont)<<'\n';
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