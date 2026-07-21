#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int n;
    cin >> n;
    cin.ignore();
    vector<int> lista(n);
    for (int i=0;i<n;i++){
        cin >> lista[i];
    }
    sort(lista.begin(),lista.end());
    int r;
    cin>>r;
    cin.ignore();
    for(int i=0;i<r;i++){
        int w;
        cin >> w;
        cin.ignore();
        auto it = upper_bound(lista.begin(),lista.end(),w);
        int quantidade = distance(lista.begin(),it);
        cout<<quantidade<<"\n";
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