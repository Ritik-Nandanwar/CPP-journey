#include<bits/stdc++.h>
using namespace std;
queue<int> q;
void kahn(vector<int> *g , vector<int> &indeg,vector<int> &topo){
    //NORMAL BFS ON GRAPH
    while(!q.empty()){
        auto node = q.front();
        q.pop();
        topo.push_back(node);
        for(auto it: g[node]){
             indeg[it]--;
            if(indeg[it] ==0){
                q.push(it);
            }
        }
    }
}
void topoKahn(vector<int> *g, int &v , vector<int> &topo){
    vector<int> indeg(v,0);
    //MARK INDEGREE OF ALL VERTICES
     for(int i=0;i<v;i++){
        for(auto it: g[i]){
            indeg[it]++;
        }
    }
    //FILL THE QUEUE WITH THE VERTICES WHICH HAVE 0 INDEGREE
    for(int i=0;i<indeg.size() ;i++){
        if(indeg[i] ==0) {
            q.push(i);
        }
    }
    kahn(g,indeg,topo);
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> g[v];
    for(int i=0;i<e ;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
    }
    vector<int> topo;
    topoKahn(g,v,topo);
    for(int i=0 ;i<topo.size() ;i++){
        cout<<topo[i]<<" ";
    }
    return 0;
}