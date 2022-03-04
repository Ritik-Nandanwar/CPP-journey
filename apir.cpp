#include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
#define v				vector<int>
#define vv				vector<vector<int>>
#define f(n) 			for(int i=0 ;i<n;i++)
using namespace std;
/***************************************************************************/

int main()
{
	int ans=0;
	int n;
	cin>>n;
	vector<pair<string,string>> v;
	f(n){
		string al,s;
		cin>>al;
		cin>>s;
		v.pb(make_pair(al,s));
	}
	for(int i=0 ;i<v.size() ;i++){
		string alp = v[i].first;
		string s = v[i].second;
		for(int k=0 ;k<s.length() ;k++){
			for(int x=0;x<alp.length() ;x++){
				if(alp[x] == s[k]) ans+=(x+1);
			}
		}
		cout<<ans<<" ";
		ans=0;
	}
    return 0;
}
		

