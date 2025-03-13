#include<bits/stdc++.h>
using namespace std;
int nho(string n){
    int m=0;
    for(int i=0;i<n.length();i++){
        if(n[i]=='6') m=m*10+5;
        else m=m*10+(n[i]-'0');
    }
    return m;
}
int lon(string n){
    int m=0;
    for(int i=0;i<n.length();i++){
        if(n[i]=='5') m=m*10+6;
        else m=m*10+(n[i]-'0');
    }
    return m;
}
int main(){
    string a,b;
    cin >> a >> b;
    cout << nho(a)+nho(b) << " " << lon(a)+lon(b) << endl;
}