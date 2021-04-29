// [v2]10804
#include<bits/stdc++.h>
using namespace std; 
vector<int> vec;
int main(){
    int s,e,num,n; 
    vec.push_back(0);
    for(int i=1; i<=20; i++) vec.push_back(i);
    for(int i=0; i<10; i++){
        cin >>s>>e;
        reverse(vec.begin()+s,vec.begin()+e+1);
    }
    for(int i=1; i<=20; i++) cout << vec[i] << " ";
}