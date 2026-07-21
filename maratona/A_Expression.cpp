#include <bits/stdc++.h>
using namespace std;

void resolver() {
    int a,b,c;
    cin >> a >> b >> c;
    int sum;
    if (a==1 or b==1 or c==1){
        if(a==1 and c==1){
            sum=a+b+c;
        }else if(a==1){
            sum=(a+b)*c;
        }else if(c==1){
            sum=a*(b+c);
        }else if(b==1 and a>=c){
            sum=(b+c)*a;
        }else if(b==1 and c>a){
            sum=(b+a)*c;
        }
    }else{
        sum=a*b*c;
    }
    cout << sum;
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