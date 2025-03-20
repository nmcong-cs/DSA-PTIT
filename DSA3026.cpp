#include<bits/stdc++.h>
using namespace std;
int n,s;
void solve(int n,int s){
    if(9*n<s || (s==0 && n>1)) cout << -1 << endl;
    else{
        vector<int> lon,nho;
        int n1=n,n2=n-1,s1=s,s2=s-1;
        while(n2--){
            if(s2>=9){
                nho.push_back(9);
                s2-=9;
            }
            else if(s2>0){
                nho.push_back(s2);
                s2=0;
            }
            else nho.push_back(0);
            }
        nho.push_back(s2+1);
        for(int i=nho.size()-1;i>=0;i--) cout << nho[i];
        cout << " ";
        while(n1--){
            if(s1>=9){
                lon.push_back(9);
                s1-=9;
            }
            else if(s1>0){
                lon.push_back(s1);
                s1=0;
            }
            else lon.push_back(0);
        }
        for(auto it:lon) cout << it;
    }
}
int main(){
    cin >> n >> s;
    if(9*n<s || (s==0 && n>1)) cout << "-1 -1" << endl;
    else solve(n,s);
}