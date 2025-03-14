#include<bits/stdc++.h>
using namespace std;
long long gt(long long a,long long b){
    if(b==1) return a;
    long long x=gt(a,b/2);
    if(b%2==0) return (x*x)%123456789;
    else return (((x*x)%123456789)*a)%123456789;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long res = gt(2,n-1)%123456789;
        cout << res << endl;
    }
}