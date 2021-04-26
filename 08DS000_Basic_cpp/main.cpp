#include<bits/stdc++.h>
// DS000[basic]133000_cpp
using namespace std; 
int arr[8][3];
int main(void){
    int n,k,s,g,ans=0 ;
    cin >> n >> k ; 
    for(int i = 0  ;i < n ;i ++){
        cin >> s >> g ; 
        arr[g][s]++;
        if(arr[g][s] % k ==0){
            arr[g][s]=0;
            ans++;
        }
    }
    for(int i =1; i< 7; i++){
        for(int j=0; j<2 ;j++){
            if(arr[i][j]!=0) ans++;
        }
    }
    cout << ans ; 
}