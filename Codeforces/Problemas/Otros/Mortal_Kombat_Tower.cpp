#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()	
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second
ll MOD = 1e9+7;

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
		vector<vl> dp(2, vl(n+1, INT_MAX));
		dp[1][0] = 0;
		ff(j, 0, n){
			dp[0][j+1] = min(dp[0][j+1], dp[1][j]+arr[j]);
			dp[1][j+1] = min(dp[1][j+1], dp[0][j]);
			if(j+2 <= n){
				dp[0][j+2] = min(dp[0][j+2], dp[1][j]+arr[j]+arr[j+1]);
				dp[1][j+2] = min(dp[1][j+2], dp[0][j]);
			}
		}
		cout << min(dp[0][n], dp[1][n]) << ed;
	}
	
	return 0;
}
