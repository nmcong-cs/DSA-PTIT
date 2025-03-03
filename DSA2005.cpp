#include<bits/stdc++.h>
using namespace std;
string s;
int ok;
int a[100];
void kt(){
    for(int i=1;i<=s.length();i++) a[i]=i;
}
void sinh(){
    int i=s.length()-1;
    while(a[i]>a[i+1] && i>0) --i;
    if(i==0) ok=0;
    else{
        int j=s.length();
        while(a[j]<a[i]) --j;
        swap(a[i],a[j]);
        int l=i+1,r=s.length();
        while(l<r){
            swap(a[l],a[r]);
            ++l;--r;
        }
    }
}
void in(){
    for(int i=1;i<=s.length();i++){
        cout << s[a[i]-1];
    }
    cout << " ";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        kt();
        ok=1;
        while(ok){
            in();
            sinh();
        }
        cout << endl;
    }
}