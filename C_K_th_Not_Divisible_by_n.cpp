#include <bits/stdc++.h>
using namespace std;

void resolver() {
    long long a,b;
    cin >> a >> b;
    long long numero=a;
    numero= b + (b-1)/(a-1);
    cout << numero << "\n";
}

int main() {
    // Otimizacao de E/S para maratona
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    // cin >> t; // Descomente se o problema tiver multiplos casos de teste
    while (t--) {
        resolver();
    }

    return 0;
}