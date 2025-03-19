#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int s,d;
        cin >> s >> d;
        if(9*d<s || (s==0&&d>1)){
            cout << "-1" << endl;
        }
        else{
        s=s-1;
        d--;
        vector<int> v;
        while(d--){
            if(s>=9){
                v.push_back(9);
                s-=9;
            }
            else if(s>0){
                v.push_back(s);
                s=0;
            }
            else if(s==0){
                v.push_back(0);
            }
        }
        v.push_back(s+1);
        for(int i=v.size()-1;i>=0;i--){
            cout << v[i];
        }
        cout << endl;
    }
    }
}