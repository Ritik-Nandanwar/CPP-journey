#include<bits/stdc++.h>
#define ll              unsigned long long int
#define pb              push_back
#define vi				vector<int>
#define vs				vector<string>
#define vc				vector<char>
#define vvi				vector<vector<int>>
#define f(n) 			for(int i=0 ;i<n;i++)
#define debug(x) 		cout << #x << " " << x <<endl;
#define MOD 			1000000007 //10^9 + 7
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}

using namespace std;
/*******************************************************************************/
// taskkill -im firstcpp.exe -f
// string check(ll &a ,ll &c){}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// int t;
	// cin>>t;
    // t=1;
	// while(t--){
        ll a,b;
        cin>>a>>b;
        ll oa = a;
        int ans=0;
        while(a%10 != 0 || a%10 != b){
            a+=oa;
            ans++;
        }
        cout<<ans;
	// }
	return 0;

}