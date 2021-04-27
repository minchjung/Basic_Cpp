//<v5>2475_cpp
#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int n=5, num, hap=0 ;
    while(n--){
        cin >> num;
        hap+= (num)*(num);
    }
    cout << hap%10; 
}