#include <bits/stdc++.h>
using namespace std;

void resolver() {
    long long n,b;
    cin >> n >> b;
    vector<int> numero(n+1,0);
    if(9*n>=b and b>0){
        for (int i=0;i<n;i++){
            if(b>9){
                numero[i]=9;
                b-=9;
            }else{
                numero[i]=b;
                b=0;
            }
        }
        int h;
        int primeiro,ultimo;
        if(numero[n-1]==0){
            primeiro=1;
            for (int i=n-2;i>=0;i--){
                if(numero[i]!=0){
                    ultimo=numero[i]-1;
                    h=i;
                    break;
                } 
            }
        }else{
            primeiro=numero[n-1];
            ultimo=numero[0];
        }for (int i=n-1;i>=0;i--){
            if(i==h){
                cout << ultimo;
                if (i==0){
                    cout<<" ";
                    break;
                }
            }else if(i==0){
                cout << numero[i] <<" ";
                break;
            }else if(i==n-1){
                cout << primeiro;
            }else{
                cout << numero[i];
            }
        }for (int i=0;i<n;i++){
            if(i==n-1){
                cout << numero[n-1] << " ";
                break;
            }else{
                cout << numero[i];
            }
        }
    }else{
        if (b==0 and n==1){
            cout<<"0"<<" "<<"0";
        }else{
        cout << "-1" <<" " <<"-1";
        }
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