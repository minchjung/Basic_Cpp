// 000[basic]1919
#include<bits/stdc++.h>
using namespace std; 
int alph1[26];
int alph2[26];
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2 ; 
    int ans=0; 
    cin >> s1 >> s2; 
    for(int i=0; i< s1.length(); i++){
        alph1[s1[i]-'a']++; 
    }
    for(int i=0; i< s2.length(); i++){
        alph2[s2[i]-'a']++; 
    }
    for(int i=0; i<26;i++){
        if(alph1[i]==alph2[i]) continue; 
        ans+=abs(alph1[i]-alph2[i]);
    }
    cout << ans ; 
}   