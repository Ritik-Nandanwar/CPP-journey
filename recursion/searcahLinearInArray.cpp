#include<bits/stdc++.h>
using namespace std;
int rec(vector<int> arr , int i , int siz , int k){
    if(i==siz){
        return -1;
    }
    if(arr[i] == k) return i;
    return rec(arr , i+1 , siz,k);
}
int main()
{
    vector<int> arr = {1,5,6,4,4,26};
    cout<< rec(arr,0,arr.size(),236);
    return 0;
}