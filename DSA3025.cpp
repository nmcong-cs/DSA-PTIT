#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<int,int> a[n];
        for(int i=0;i<n;i++){
            cin >> a[i].second;
            cin >> a[i].first;
        }
        sort(a,a+n);
        int res=1;
        int begin=a[0].first;
        for(int i=1;i<n;i++){
            if(a[i].second >= begin){
                ++res;
                begin=a[i].first;
            }
        }
        cout << res << endl;
    }
}