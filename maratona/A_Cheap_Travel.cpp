#include <bits/stdc++.h>
using namespace std;

void resolver() {
    float viagens,viagem_max,preco,preco_max;
    cin>>viagens>>viagem_max>>preco>>preco_max;
    float p_atual=preco;
    float v_atual=1.0;
    int total=0;
    if(viagem_max/preco_max>1/preco){
        p_atual=preco_max;
        v_atual=viagem_max;
    }
    while(true){
        if(viagens<=0.0){
            break;
        }
        else if( viagens*preco<preco_max or (p_atual==preco and preco!=preco_max)){
            total+=int(viagens*preco);
            break;
        }else{
            total+=int(p_atual);
            viagens-=v_atual;
        }
    }
    cout<<total;
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