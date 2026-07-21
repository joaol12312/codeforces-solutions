#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int x,y,n,z;
    cin >> x >> y >> n;
    z=(n-y)/x;
    int t = z*x+y;
    cout << t <<"\n";
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