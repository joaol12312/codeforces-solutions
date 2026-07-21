#include <bits/stdc++.h>
using namespace std;

void resolver() {
    string n;
    cin >> n;
    if(n.size()<=10){
        cout << n << "\n";
    }else{
        char p = n.front();
        char u = n.back();
        int t=n.size()-2;
        string new_n =string(1,p) + to_string(t) + u;
        cout << new_n << "\n";
    }
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