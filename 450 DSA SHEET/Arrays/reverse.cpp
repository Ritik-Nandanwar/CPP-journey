// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int arr[n];
    int ans[n];
    for(int i=0 ;i<n ; ++i){
        cin>>arr[i];
    }
    stack <int> s;
    for(int i=0 ;i<n ; ++i){
        s.push(arr[i]);
    }
    for(int i=0 ;i<n ; i++){
        ans[i] = s.top();
        s.pop();
    }
    for(int i=0 ;i<n ; ++i){
        cout<<ans[i]<<" ";
    }
    return 0;
}