#include <bits/stdc++.h>
using namespace std;
void resolvendo(){
    int n,c;
    cin >> n >> c;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    bool possivel1 = true;
    long long custo1 = 0;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            possivel1 = false;
            break;
        }
        custo1+=(a[i]-b[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool possivel2 = true;
    long long custo2 = c;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            possivel2 = false;
            break;
        }
        custo2+=(a[i]-b[i]);
    }
    if (possivel1 && possivel2){
        cout << min(custo1,custo2) << "\n";
    }else if(possivel1){
        cout << custo1 << "\n";
    }else if(possivel2){
        cout << custo2 << "\n";
    }else{
        cout << -1 << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        resolvendo();
    }
    return 0;
}