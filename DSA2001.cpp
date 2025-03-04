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
        int dong=n,cot=n;
        while(dong--){
            cout << "[";
            for(int i=0;i<cot;i++){
                cout << a[i];
                if(i!=cot-1) cout << " ";
                a[i]=a[i]+a[i+1];
            }
            --cot;
            cout << "]" << endl;
        }
    }
}