#include<bits/stdc++.h>
using namespace std;
int rec(vector<int> arr , int i , int siz){
    if(i==siz){
        return 0;
    }
    return arr[i] + rec(arr , i+1 , siz);
}
int main()
{
    vector<int> arr = {1,5,6,4,4,2};
    cout<< rec(arr,0,arr.size());
    return 0;
}