#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        map<char,int> mp;
        priority_queue<int> q;
        for(int i=0;i<s.length();i++){
            ++mp[s[i]];
        }
        for(auto it:mp){
            q.push(it.second);
        }
        int res=0;
        while(n--){
            int a=q.top();
            q.pop();
            q.push(a-1);
        }
        while(!q.empty()){
            int a=q.top();
            q.pop();
            res += (a)*(a);
        }
        cout << res << endl;
    }
}