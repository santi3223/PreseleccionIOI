#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back

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
		vl dp(n+1);
		dp[0] = 0;
		dp[1] = arr[0];
		ff(i, 2, n+1){
			ll id = i-1;
			dp[i] = min(dp[i-1]+arr[id]-1, dp[i-2]+arr[id-1]+max(0LL, arr[id]-(i-1)));
		}
		cout << dp[n] << ed;
	}
}
