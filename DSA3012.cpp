#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<int,int> mp;
        for(int i=0;i<s.length();i++){
            ++mp[s[i]-'a'];
        }
        int res=0;
        for(int i=0;i<26;i++){
            if(res<mp[i]) res=mp[i];
        }
        if(s.length() % 2 == 0){
            if(res <= s.length()/2) cout << 1 << endl;
            else cout << -1 << endl;
        }
        else{
            if(res <= s.length()/2+1) cout << 1 << endl;
            else cout << -1 << endl;
        }
    }
}