// //CHECK BARPARTITE IN A UNDIRECTED GRAPH WITH BFS
#include<bits/stdc++.h>
using namespace std;
bool bipartite(int i ,vector<int> g[] , int color[]){
    queue<int> q;
    q.push(i);
    color[i] = 1;
    while(!q.empty()){
        auto node = q.front();
        q.pop();
        for(auto it: g[node]){
            if(color[it] == -1){
                color[it] = 1-color[node];
                q.push(node);
            }
            else{
                if(color[i] == color[node]){
                    return false;
                }
            }
        }
    }
    return true;
}
bool checkBarpartiteBFS(vector<int> g[] , int v){
    int color[v];
    memset(color, -1, sizeof color); 
    for(int i=0 ;i<v ;i++){
        if(color[i] == -1){
            if(!bipartite(i , g,color)){
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> g[v];
    for(int i=0 ;i<e ;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    // vector<int> color(v,-1);
    if(checkBarpartiteBFS(g ,v)){
        cout<<"BIPARTITE";
    }
    else{
        cout<<"NOT BIPARTITE";
    }
    return 0;
}
// // 8 8
// // 1 2
// // 2 3
// // 3 4
// // 4 5
// // 5 6
// // 6 7
// // 2 7
// // 5 8

// // 7 7
// // 1 2
// // 3 4
// // 4 5
// // 5 6
// // 6 7
// // 2 7
// // 5 8





























// #include <bits/stdc++.h>
// using namespace std;

// bool bipartiteBfs(int src, vector<int> adj[], int color[]) {
//     queue<int>q;
//     q.push(src); 
//     color[src] = 1; 
//     while(!q.empty()) {
//         int node = q.front(); 
//         q.pop();
        
//         for(auto it : adj[node]) {
//             if(color[it] == -1) {
//                 color[it] = 1 - color[node]; 
//                 q.push(it); 
//             } else if(color[it] == color[node]) {
//                 return false; 
//             }
//         }
//     }
//     return true; 
// }
// bool checkBipartite(vector<int> adj[], int n) {
//     int color[n];
//     memset(color, -1, sizeof color); 
//     for(int i = 0;i<n;i++) {
//         if(color[i] == -1) {
//             if(!bipartiteBfs(i, adj, color)) {
//                 return false;
//             }
//         }
//     }
//     return true; 
// }
// int main() {
// 	int n, m;
// 	cin >> n >> m;
// 	vector<int> adj[n];
// 	for(int i = 0;i<m;i++) {
// 	    int u, v;
// 	    cin >> u >> v;
// 	    adj[u].push_back(v); 
// 	    adj[v].push_back(u); 
// 	}
	
// 	if(checkBipartite(adj, n)) {
// 	    cout << "yes"; 
// 	} else {
// 	    cout << "No"; 
// 	}
// 	return 0;
// }