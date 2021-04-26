// 000[basic]2752__cpp
#include<bits/stdc++.h>
using namespace std; 
int main(void){
    vector<int> arr ; 
    for(int i = 0 ; i< 3 ; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    for(auto a: arr)
        cout << a << " ";
}