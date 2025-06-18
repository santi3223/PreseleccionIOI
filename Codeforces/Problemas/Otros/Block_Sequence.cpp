#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		vl dp(n+5, n+1);
		dp[n-1] = 1;
		for(ll i = n-2; i >= 0; i--){
			ll p = i+arr[i]+1;
			ll x;
			if(p > n){
				x = n+1;
			}
			else if(p == n){
				x = 0;
			}
			else{
				x = dp[p];
			}
			dp[i] = min(dp[i+1]+1, x);
		}
		cout << dp[0] << ed;
	}
	
	
}
