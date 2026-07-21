#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int n;
    cin >> n;
    if(n%2==0 and n!=2){
        cout << "YES";
    }
    else{
        cout << "NO";
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