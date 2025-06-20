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
	ll n;
	cin >> n;
	vl arr(1e5+5, 0);
	ll maxx = 0;
	ff(i, 0, n){
		ll x;
		cin >> x;
		arr[x]++;
		maxx = max(maxx, x);
	}
	vl dp(maxx+5, 0);
	dp[1] = arr[1];
	ff(i, 2, maxx+1){
		dp[i] = max(dp[i-1], dp[i-2]+arr[i]*i);
	}
	cout << dp[maxx];
}
