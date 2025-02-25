#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        set<int> s1;
        set<int> s2;
        set<int> s3;
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin >> a[i];
            s1.insert(a[i]);
            s2.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin >> b[i];
            s1.insert(b[i]);
            if(s2.count(b[i])) s3.insert(b[i]);
        }
        for(auto it : s1) cout << it << " "; 
        cout << endl;
        for(auto it : s3) cout << it << " ";
        cout << endl;
    }
}