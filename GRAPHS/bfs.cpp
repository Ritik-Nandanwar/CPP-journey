#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(int v , vector<int> adj[]){
    vector<int> ans;
    vector<int> vis(v,0);
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        auto node = q.front();
        q.pop();
        vis[node] =1;
        ans.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] =1;
                q.push(it);
            }
        }
    }
    return ans;
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i=0 ;i<e ;i++){
        int v1, v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    vector<int> bfstrav = bfs(v,adj);
    for(int i=0 ;i< bfstrav.size() ;i++){
        cout<<bfstrav[i]<<" ";
    }
    return 0;
}