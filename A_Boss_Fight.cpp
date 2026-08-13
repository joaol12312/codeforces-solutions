#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int b;
    cin >> b;
    vector<int> ataques(b);
    for(int i=0;i<b;i++){
        int c;
        cin >> c;
        ataques[i]=c;
    }
    sort(ataques.rbegin(),ataques.rend());
    unordered_map<int,int> dic;
    int soma=0;
    for(int i=0;i<b;i++){
        soma+=ataques[i];
        dic[(ataques[i])]+=1;
    }
    int maior=0;
    for(int i=0;i<b;i++){
        if (maior==0){
            maior=(ataques[i]);
        }else if(dic[maior]<dic[(ataques[i])]){
            maior=(ataques[i]);
        }
    }int necessarios=dic[maior]-2;
    int total;
    if(necessarios<=b-dic[maior]){
        total=soma;
    }else{
        int c=b-dic[maior];
        int soma_b=0;
        for(int i=0;i<c;i++){
            if(ataques[i]!=(maior)){
                soma_b+=ataques[i];
            }else{
                c++;
            }
        }
        total=soma_b+((b-dic[maior])+2)*(maior);
    }cout << total <<"\n";
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