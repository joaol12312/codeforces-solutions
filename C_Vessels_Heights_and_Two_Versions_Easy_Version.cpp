#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int tam;
    cin >> tam;
    vector <int> numeros(tam);
    for(int i=0; i<tam; i++){
        int b=0;
        cin >> b;
        numeros[i]=b;
    }for(int j=0; j<tam; j++){
        int total=0;
        for(int i=0; i<tam; i++){
        int maior_numero;
        if (i==j){
            maior_numero=0;
        }else{
        int maior_direita=0;
        int maior_esquerda=0;
          for(int w=0; w<abs(i-j); w++){
            int atual= i-w-1;
            if (i-w-1<0){
                atual+=tam;
            }
            if(numeros[atual]>maior_esquerda){
                maior_esquerda=numeros[atual];
            }cout << to_string(maior_esquerda) << "oi";
          }for(int w=0; w<tam-abs(i-j);w++){
            int atual=w+i;
            if ((w+i)>tam-1){
                atual-=tam;
            }
            if (numeros[atual]>maior_direita){
                maior_direita=numeros[atual];
            }
          }cout<<"ola";
          maior_numero=min(maior_direita,maior_esquerda);
          total+=maior_numero;}
        }cout << to_string(total) << " ";
    }cout << "\n";
}

int main() {
    // Otimizacao de E/S para maratona
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    // cin >> t; // Descomente se o problema tiver multiplos casos de teste
    while (t--) {
        resolver();
    }

    return 0;
}