#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ll maxx = 0;
		ff(i, 0, n){
			cin >> arr[i];
		}
		vl dp(n+5, 0);
		for(ll i = n-1; i >= 0; i--){
			dp[i] = arr[i];
			ll x = i+arr[i];
			if(x < n){
				dp[i] += dp[x];
			}
			maxx = max(maxx, dp[i]);
		}
		cout << maxx << ed;
	}
	
	return 0;
}
