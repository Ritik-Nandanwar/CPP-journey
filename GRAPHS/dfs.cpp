#include<bits/stdc++.h>
using namespace std;
vector<int> dfs(int v , vector<int> g[] ,vector<int> &vis , vector<int> &dfstrav){
    dfstrav.push_back(v);
    vis[v] =1;
    for(auto it : g[v]){
        if(!vis[it]){
            dfs(it,g,vis,dfstrav);
        }
    }
    return dfstrav;
}
int main()
{
    int v , e;
    cin>>v>>e;
    vector<int> g[v];
    for(int i=0; i< e ;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    vector<int> dfstrav;
    vector<int> vis(v ,0);
    for(int i=0 ;i<v ; i++){
        if(!vis[i]){
            dfs(i , g , vis , dfstrav);
        }
    }
    for(auto it: dfstrav){
        cout<<it<<" ";
    }
    return 0;
}