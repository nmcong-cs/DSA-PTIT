#include<bits/stdc++.h>
using namespace std;
int n,ok,a[100],b[100];
void kt(){
    for(int i=1;i<=n;i++) a[i]=0;
}
void sinh(){
    int i=n;
    while(a[i]==1 && i>0){
        a[i]=0;
        --i;
    }
    if(i==0) ok=0;
    else{
        a[i]=1;
    }
}
void in(){
    for(int i=1;i<=n;i++){
        if(a[i]==1) cout << b[i] << " ";
    }
    cout << endl;
}
int check1(int c[],int m){
    for(int i=1;i<=m;i++){
        if(c[i]>=c[i+1]) return 0;
    }
    return 1;
}
int check(int a[],int b[],int n){
    int c[100];
    int cnt=1;
    for(int i=1;i<=n;i++){
        if(a[i]==1){
            c[cnt++]=b[i];
        }
    }
    if(check1(c,cnt)) return 1;
    else return 0;
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++) cin >> b[i];
    kt();
    ok=1;
    while(ok){
        if(check(a,b,n)){
            in();
            sinh();
        }
    }
}