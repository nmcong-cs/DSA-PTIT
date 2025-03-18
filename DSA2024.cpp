#include<bits/stdc++.h> 
using namespace std ; 
int n , a[21] , x[21] ; 
vector<string> v; 
void print(int m) { 
    string s = "" ; 
    for(int i = 1 ;i<= m ; i++) { 
        s+= to_string(x[i]) +" " ; 
    } 
    v.push_back(s) ; 
} 
void Try(int i , int cnt) { 
    for(int j = cnt+1 ;j<= n; j++) { 
        if(a[j]<x[i-1]) continue ; 
        x[i] = a[j]; 
        if(i!=1) print(i) ; 
        if(i<n) Try(i+1 , j) ; 
    } 
} 
int main() { 
    cin >> n ; 
    for(int i = 1 ;i<= n; i++) { 
        cin >> a[i] ; 
    } 
    Try(1,0) ; 
    sort(v.begin(),v.end()) ; 
    for(string i : v) { 
        cout << i << endl ; 
    } 
}