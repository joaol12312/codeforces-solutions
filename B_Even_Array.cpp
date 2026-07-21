#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int n;
    cin >> n;
    int lista[n];
    int par=0;
    int impar=0;
    for(int i=0;i<n;i++){
        int p;
        cin >> p;
        lista[i]=p;
        if(p%2==0){
            par++;
        }else{
            impar++;
        }
    }
    if((n%2==0 and impar==par) or(n%2==1 and impar+1==par)){
        int trocas=0;
        for(int i=0;i<n;i++){
            if((lista[i]%2)!=(i%2)){
                trocas++;
            }
        }
        cout<<(trocas/2)<<"\n";
    }else{
        cout<<-1<<"\n";
    }
}

int main() {
    // Otimizacao de E/S para maratona
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin >> t;
    // cin >> t; // Descomente se o problema tiver multiplos casos de teste
    while (t--) {
        resolver();
    }

    return 0;
}