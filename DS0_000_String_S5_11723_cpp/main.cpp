// 000<string>[S5]_cpp
#include<bits/stdc++.h>
using namespace std ; 

int S[21];
int main(void){
    int n,x;
    char str[20];
    cin >>n ;  
    for(int i=0; i<n;i++){
        // cin << str(string) << x; 형태로 받으면 all 받을때
        // x 정수 입력값이 없으므로 종료 된다. 
        // scanf 를 활용하고 문자열을 받을때 char 배열로 받아주면 해결된다. 
        scanf("%s %d",&str, &x); 
        if (str[1] =='d') S[x]=1;
        else if(str[0]=='r') S[x]=0;
        else if(str[0]=='c'){
            if(S[x]==1) cout<< "1\n";
            else cout<< "0\n"; 
        } 
        else if(str[0]=='t'){
            if(S[x]==1) S[x]=0;
            else S[x]=1;
        }
        else if(str[1]=='l'){
            fill(S+1,S+22,1);
        } 
        else fill(S+1,S+22,0);
    }
}
