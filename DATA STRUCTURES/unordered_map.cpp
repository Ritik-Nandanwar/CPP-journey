#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,5,6,7,1,3,2,5,6,74,654,3,1};
    unordered_map<int,int> M;
    int si =sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<si;i++){
            if (M.find(arr[i]) != M.end())
        {
            M.insert({arr[i], 1});
        }
 
        // Else update the frequency
        else
        {
            // M[arr[i]]++;
        }
    }
    for (auto it : M) {
        cout << it.first << ' ' << it.second << '\n';
    }
    return 0;
}