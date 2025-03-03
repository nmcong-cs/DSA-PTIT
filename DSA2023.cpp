#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[100];
set<string> s;
string b[100];
void kt(){
    for(int i=1;i<=k;i++) a[i]=i;
}
void sinh(){
    int i=k;
    while(a[i]==n-k+i && i>0) --i;
    if(i==0) ok=0;
    else{
        a[i]=a[i]+1;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
void in(){
    for(int i=1;i<=k;i++){
        cout << b[a[i]] << " ";
    }
    cout << endl;
}
int main(){
    int m;
    cin >> m >> k;
    string a[m];
    for(int i=0;i<m;i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    int cnt=1;
    for(auto it : s){
        b[cnt++]=it;
    }
    n=s.size();
    kt();
    ok=1;
    while(ok){
        in();
        sinh();
    }
}