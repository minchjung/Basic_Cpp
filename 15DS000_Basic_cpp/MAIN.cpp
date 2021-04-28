// [v4]2884
#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int H, M ; 
    cin >> H >> M ; 
    if (M<45) {
        M+=60;
        H--;
        if(H<0) H=23;
    }
    cout <<H<<" "<<M-45;
}