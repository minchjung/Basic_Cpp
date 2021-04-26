// DS000[basic]2576_cpp
#include<bits/stdc++.h>
using namespace std; 

int main(void){
    vector<int> odd ;
    int num;
    int hap = 0 ; 
    for(int i=0 ; i<7; i++){
        cin >>  num; 
        if(num==0) continue;
        if(num % 2 ==1){
            odd.push_back(num); 
            hap+=num;
        } 
    }
    if(hap==0) cout<< -1;
    else{
        sort(odd.begin(), odd.end());
        cout << hap<<'\n';
        cout << odd[0];
    } 
}