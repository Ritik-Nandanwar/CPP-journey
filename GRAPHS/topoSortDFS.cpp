#include<bits/stdc++.h>
using namespace std;
void topoHelp( int i , stack<int> &st ,vector<int> g[] ,vector<bool> &vis){
    vis[i] = true;
    for(auto it:g[i]){
        if(!vis[it]){
            topoHelp(it,st,g,vis);
        }
    }
    st.push(i);
}
void topoDFS(vector<int> g[] , int v , vector<bool> &vis){
    stack<int> st;
    for(int i=0 ;i<v ;i++){
        if(vis[i] == false){
            topoHelp(i,st,g,vis);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
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
        // g[v2].push_back(v1);
    }
    vector<bool> vis(v,false);
    topoDFS(g ,v ,vis);
    return 0;
}

// example :=>
// 6 6
// 5 0
// 4 0
// 4 1
// 2 1
// 3 2
// 5 3
// ANS => 5 4 3 2 1 0 