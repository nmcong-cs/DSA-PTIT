#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    cout << max(max(a[0]*a[1],a[n-1]*a[n-2]),max(a[0]*a[1]*a[n-1],a[n-1]*a[n-2]*a[n-3]));
}