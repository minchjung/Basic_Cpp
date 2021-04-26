#include<bits/stdc++.h>
using namespace std ; 
// 000[basic]1475
int num[10];
int main(void){
    string number ; 
    int six,ans;
    cin >> number ;
    for(int i=0; i<number.length(); i++) 
        num[number[i]-'0']++;
    
    six= num[6]+num[9];
    if(six %2==1) num[6]=six/2+1;
    else num[6]=six/2;
    num[9]=0;
    cout << *max_element(num, num+10);
}