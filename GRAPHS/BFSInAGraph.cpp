// #include<bits/stdc++.h>
// using namespace std;
// void bfs(int i , vector<int> &g){
//     vector<int> bfsalgo;
//     vector<int> vis()
// }
// int main()
// {
//     int v,e;
//     vector<int> g[v+1];
//     for(int i=0 ;i<v ; i++){
//         int v1,v2;
//         cin>>v1>>v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     bfs(0 , g);
//     return 0;
// }

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
vector<int> bfsOfGraph(int v, vector<int> adj[]) {
    vector<int> bfs;
    vector<int> vis(v+1 ,0);
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        vis[node] =1;
        bfs.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
            }
        }
    }
    return bfs;
}
int main() {
    int V, E;
    cin >> V >>E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<int> ans = bfsOfGraph(V, adj);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}