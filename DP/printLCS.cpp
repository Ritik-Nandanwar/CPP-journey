#include<bits/stdc++.h>
using namespace std;

int lcs(string s1 , string s2,int i , int j,vector<vector<int>> &ans){
    if(i <0 || j<0){
        return 0;
    }
    //same index match
    if(ans[i][j] != -1){
        return ans[i][j];
    }  
    if(s1[i] == s2[j]){
       return ans[i][j] = 1+ lcs(s1,s2,i-1,j-1,ans);
    }
    return ans[i][j] = max(lcs(s1,s2,i,j-1,ans),lcs(s1,s2,i-1,j,ans));
}
int main()
{
    string s1 , s2;
    cin>>s1>>s2;
    int n = s1.length();
    int m = s2.length();
    vector<vector<int>> ans(n , vector<int> (m,-1));
    cout<<lcs(s1,s2,n-1,m-1,ans)<<endl;
    for(auto it:ans){
        for(auto itt:it){
            cout<<itt<<" ";
        }
        cout<<endl;
    }
    return 0;
}