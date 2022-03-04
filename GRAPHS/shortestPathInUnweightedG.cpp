#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> g[v];
    for(int i=0 ;i< e ;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    vector<int> dist(v,INT_MAX);
    queue<int> q;
    q.push(0);
    dist[0] =0;
    while(!q.empty()){
        auto node = q.front();
        q.pop();
        for(auto it: g[node]){
            if(dist[node] + 1 < dist[it]){//checking if the distance of child is less than parent +1 (since this is bfs so we moving to adjacents of every node  ,so 1+ parent's distance from 0 will give child's distance from 0, AND we are also keeping track of minimum with this)
                dist[it] = dist[node] + 1;
                q.push(it);
            }
        }
    }
    for(int i=0 ;i< dist.size() ;i++){
        cout<<dist[i]<<" ";
    }
    return 0;
}
// EXAMPLE
// 6 6
// 0 1
// 1 4
// 4 5
// 0 3
// 3 2
// 2 3
// ANSWER =>  0 1 2 1 2 3 