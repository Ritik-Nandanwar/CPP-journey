#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> graph[n+1];
    for(int i=0 ;i<e ;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
        //for direced we will see the directions and will take the edge accordingly
    }
    for(int i=0 ;i<n ;i++){
        cout<<i<<" --> ";
        for(int j=0 ;j<graph[i].size() ;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}