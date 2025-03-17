#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll find(){
    queue<ll> res;
    int start = 9;
    res.push(start);
    while(!res.empty()){
        ll tmp=res.front();
        if(tmp % n == 0) return tmp;
        res.pop();
        res.push(tmp*10);
        res.push(tmp*10+9);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        cout << find() << endl;
    }
}