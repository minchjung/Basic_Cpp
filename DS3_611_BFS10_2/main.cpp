// # 611<BFS>[S2]11724_py_ 안되고있음; 왜안되는 모름;;
#include<bits/stdc++.h>
using namespace std ; 
vector<int> board[1001];
int vis[10001];
int main(){
    int N, M, a, b, cnt ; 
    cin >> N >> M ; 
    // setting input val
    while(M--){
        cin >> a >> b ; 
        board[a].push_back(b);
        board[b].push_back(a);
    }
    //BFS
    for(int i=1; i<=N;i++){
        //Visit if it not visited yet, push it into queue, count it 
        //Since its first start 
        if(vis[i]==1) continue; 
        queue<int> q ;
        q.push(i);
        vis[i]=1; 
        cnt++;
        // BFS search from the start node above
        while(!q.empty()){
            int now = q.front(); q.pop();
            // Check all the nodes to connect with the current(now) 
            for(auto node : board[now]){
                // if not visted, go visit and push it into queue
                if(vis[node]==1) continue ;
                vis[node]=1;
                q.push(node);
            }
        }
    }
    cout << cnt; 
}