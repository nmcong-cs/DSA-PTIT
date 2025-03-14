#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int k;
    cin>>k; 
    while(k--){ 
        long long n,i;
        cin>>n>>i; 
        while(true){ 
            if(n == 1 || pow(2,n-1) == i){ 
                if(n == 1) cout<<"1\n"; 
                else cout<<n<<endl; 
                break; 
            } 
            if(i >= pow(2,n-1)){ 
                i = i - pow(2,n-1); 
            } 
            n--; 
        } 
    } 
}