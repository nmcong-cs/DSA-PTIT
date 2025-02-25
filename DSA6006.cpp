#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        multiset<int> s;
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        for(auto it : s){
            cout << it << " ";
        }
        cout << endl;
    }
}