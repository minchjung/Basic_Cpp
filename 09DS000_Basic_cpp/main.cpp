// DS000[basic]10807_cpp
#include<bits/stdc++.h>
using namespace std; 

int posit[105];
int nega[105]; 
int main(void){
    int n,a ;
    cin >> n ; 
    for(int i =0 ; i < n ;i++){
        cin >> a ; 
        if(a < 0) nega[abs(a)]++;
        else posit[a]++;
    }
    int v ; 
    cin >> v ; 
    if(v <0) cout << nega[abs(v)]; 
    else cout << posit[v];
}