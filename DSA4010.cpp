#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int res=0;
        int kq=0;
        for(int i=0;i<n;i++){
            res += a[i];
            if(res<0) res=0;
            else{
                if(kq<res) kq=res;
            }
        }
        cout << kq << endl;
    }
}