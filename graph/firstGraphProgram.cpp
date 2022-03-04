#include<bits/stdc++.h>
using namespace std;

int graph[10][10];
void clrGraph (){
    memset(graph ,0,sizeof graph);
}
void addEdge (int s , int d){
    graph[s][d] =1;
    graph[d][s] =1;
}
void delEdge (int s , int d){
    graph[s][d] =0;
    graph[d][s] =0;
}
void dfs(int i , vector<int> &cont){
    if(cont[i] ==1) return;
    cont[i] =1;
    cout<<i<<" ";
    for(int j=0 ;j<10;j++){
        if(graph[i][j] ==1){
            dfs(j , cont);
        }
    }
}
int main()
{
    clrGraph();
    addEdge(2 ,8);
    addEdge(3 ,5);
    addEdge(9 ,7);
    for(int i=0 ;i<10 ;i++){
        for(int j=0 ;j<10;j++){
            cout<<" "<<graph[i][j]<<" "<<"|";
        }
        cout<<endl;
    }
    vector<int> cont(10,0);
    for(int i=0 ;i<10;i++){
        cout<<i+1<<" ";
        dfs(i,cont);
        cout<<endl;
    }
    return 0;
}