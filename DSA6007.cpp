#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int l=1,r=n;
        for(int i=0;i<n;i++){
            while(a[i]==b[i]){
                ++l;
                ++i;
            }
            break;
        }
        for(int i=n-1;i>=0;i--){
            while(a[i]==b[i]){
                --r;
                --i;
            }
            break;
        }
        cout << l << " " << r << endl;
    }
}