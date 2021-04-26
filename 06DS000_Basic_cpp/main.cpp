// DS000[basic]2490_cpp
#include<bits/stdc++.h>
using namespace std; 

int arr[4][3];
int goTest(int ar[]){
    switch (ar[0])
    {
    case 4: 
        cout << "D\n";
        return 0;
    case 3: 
        cout << "C\n";
        return 0; 
    case 2: 
        cout << "B\n";
        return 0; 
    case 1: 
        cout << "A\n";
        return 0; 
    default:
        cout << "E\n";
        return 0;
    }
}
int main(void){
    for(int i = 0 ; i < 3 ; i++){
       for(int j =0; j<4 ;j++){
            int num ;
            cin >> num;      
            if (num ==0) arr[i][0]++;
            else arr[i][1]++; 
       }
       goTest(arr[i]);
    }
}