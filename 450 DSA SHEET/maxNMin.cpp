// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    set<int> s;  
    for(int i =0 ;i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
        x=0;
    }
    sort(v.begin() , v.end());
    cout<<v[0]<<" "<<v[n-1];
    return 0;
}