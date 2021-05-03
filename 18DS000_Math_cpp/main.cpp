// math[v3]2720
#include<bits/stdc++.h>
using namespace std; 

int T,C,q,d,n,p; 
int cal(int C){
    int ans[5]={0,0,0,0,0};
    if(C/q!=0){
        ans[0]=C/q;
        C=C%q;
    }if (C/d!=0){
        ans[1]=C/d; 
        C=C%d ;
    }if (C/n!=0){
        ans[2]=C/n; 
        C=C%n ;
    }if (C/p!=0){
        ans[3]=C/p; 
        C=C%p ;
    }
    for(int i=0; i<4; i++) 
        cout << ans[i]<< " ";
    return 0;
}

int main(void){
    q=25, d=10, n=5, p=1;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> C ; 
        cal(C);
        cout << "\n";
    }
    return 0;
}