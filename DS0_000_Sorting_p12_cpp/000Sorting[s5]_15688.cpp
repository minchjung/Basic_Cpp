// 000<Sorting>[s5]_CountSorting_15688_cpp
#include<bits/stdc++.h>
using namespace std; 
int arr[2000001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ; 
    cin >> n ; 
    for(int i =0; i<n;i++){
        int num;
        cin >> num;
        arr[num+1000000]++; 
    }
    for(int i=0; i<2000001;i++){
        while(arr[i]--){
            cout<< i-1000000<<"\n";
        }
    }
}