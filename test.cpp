/*🚩 जय श्री राम 🚩*/
#include<bits/stdc++.h>
#define ll              int 
#define MOD             1000000007 //10^9 + 7
#define nl              endl;
#define yyy             cout<<"YES"<<endl
#define nnn             cout<<"NO"<<endl
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}

using namespace std;
/*============================================================================*/
//taskkill -im firstcpp.exe -f
void ritik(){
	ll n;
	cin>>n;
	if(n == 0){
		cout<<1<<nl;
		return;
	}
	if(n == 100){
		cout<<1<<nl;
		return;
	}
	if(n%50 == 0){
		cout<<2<<nl;
		return;
	}
	if(n%25 == 0){
		cout<<4<<nl;
		return;
	}
	if(n%10 == 0){
		cout<<10<<nl;
		return;
	}
	else{
		cout<<100<<nl;
	}
}
int main()
{
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	cin>>t;
	while(t--){
		ritik();
	}	
	return 0;
}