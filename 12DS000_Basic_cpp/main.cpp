// 000[mid]3273
#include<bits/stdc++.h>
using namespace std; 

vector<int> vec;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,num,ans=0 ; 
    cin >> n ; 
    for(int i=0; i<n; i++){
        cin >> num;
        vec.push_back(num);
    }
    cin >> x ;
    sort(vec.begin(), vec.end());
    int start=0, end=n-1; 
    while(start<end){
        if (vec[start] + vec[end] == x){
            ans++;
            start++;
            end --;
        }else if (vec[start]+vec[end]<x) start++;
        else end --; 
    }
    cout << ans ; 
}   