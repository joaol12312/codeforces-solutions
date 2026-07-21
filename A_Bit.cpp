#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int c;
    cin >> c;
    cin.ignore();
    int x=0;
    string w;
    for(int i=0;i<c;i++){
        getline(cin,w);
        for (char b:w){
            if (b=='+'){
                x++;
                break;
            }if(b=='-'){
                x--;
                break;
            }
        }
    }cout << x;
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