//TO FIND THE SHORTESTR DISTANCE IN A WEIGHTED DAG
// 1) FIND TOPOSORT(USING DFS / BFS) 

#include<bits/stdc++.h>
using namespace std;
void topoHelp(int src , vector<pair<int,int>> g[] , stack<int> &st , vector<int> &vis){
    vis[src] =1;
    for(auto it: g[src]){
        if(!vis[it.first]){
            topoHelp(it.first,g,st,vis);
        }
    }
    st.push(src);
}
void findShortestPath(vector<pair<int,int>> g[] , int v, vector<int> &vis){
    stack<int> st;
    for(int i=0 ;i<v ;i++){
        if(!vis[i]){
            topoHelp(i,g,st,vis);
        }
    }
    vector<int> dist(v,INT_MAX);
    dist[0] =0;
    while(!st.empty()){
        auto node = st.top();
        st.pop();
        if(dist[node] != INT_MAX){
            for(auto it: g[node]){
                if(dist[node] + it.second < dist[it.first]){
                    dist[it.first] = dist[node] + it.second ;
                }
            }
        }
    }
    for(int i=0 ;i<dist.size();i++){
        dist[i] == INT_MAX ? cout<<"INF ": cout<<dist[i]<<" ";
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<pair<int,int>> g[v];
    for(int i=0 ;i<e ;i++){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        g[v1].push_back({v2,w});
    }
    vector<int> vis(v,0);
    findShortestPath(g,v,vis);
    return 0;
}
//EXAMPLE
// 5 5
// 4 2 2
// 4 1 5
// 1 3 1
// 0 3 4
// 0 2 3