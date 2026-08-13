#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int tam;
    string palav;
    cin >> tam;
    cin.ignore();
    cin >> palav;
    int zeros=0,uns=0,atual=0;
    char num = 'a';
    for(int i=0;i<tam;i++){
        if(i==0){
            atual=1;
            num=palav[0];
        }else{
            if(palav[i]==palav[i-1] and i==tam-1){
                atual++;
                if (num=='0'){
                    zeros+=(atual-1);
                }else{
                    uns+=(atual-1);
                }
            }else if(palav[i]==palav[i-1]){
                atual++;
            }else if(atual>1){
                if (num=='0'){
                    zeros+=(atual-1);
                }else{
                    uns+=(atual-1);
                }
                atual=1;
                num=palav[i];
            }else{
                atual=1;
                num=palav[i];
            }
        }
    }
    if(zeros==uns){
        cout << to_string(zeros+uns) << "\n";
    }else if(zeros==uns+1 or zeros==uns-1 or (zeros==uns-2 and (palav[0]=='0' or palav[tam-1]=='0')) or (zeros==uns+2 and (palav[0]=='1' or palav[tam-1]=='1')) or (zeros==uns-3 and (palav[0]=='0' and palav[tam-1]=='0')) or (zeros==uns+3 and (palav[0]=='1' and palav[tam-1]=='1'))){
        int maior=max(uns,zeros);
        cout << to_string(maior*2-1) << "\n";
    }else{
        cout << "-1" << "\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    // cin >> t;
    while (t--) solve();
 
    return 0;
}