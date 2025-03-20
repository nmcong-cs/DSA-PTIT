#include<bits/stdc++.h>
using namespace std;
int snt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
void solve(int n){
    for(int i=2;i<=n/2;i++){
        if(snt(i) && snt(n-i)){
            cout << i << " " << n-i << endl;
            return ;
        }
    }
    cout << "-1" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
    }
}