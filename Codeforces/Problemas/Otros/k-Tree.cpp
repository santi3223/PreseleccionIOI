#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
ll MOD = 1e9+7;


int main(){
	ll n, k, d;
	cin >> n >> k >> d;
	vector<vl> dp(n+5, vl(2));
	dp[0][0] = 1;
	dp[0][1] = 0;
	ff(i, 1, n+1){
		dp[i][0] = dp[i][1] = 0;
		ff(j, 1, k+1){
			if(i-j < 0){
				break;
			}
			if(j < d){
				dp[i][0] += dp[i-j][0];
				dp[i][0] %= MOD;
				dp[i][1] += dp[i-j][1];
				dp[i][1] %= MOD;
			}
			else{
				dp[i][1] += dp[i-j][1]+dp[i-j][0];
				dp[i][1] %= MOD;
			}
		}
	}
	cout << dp[n][1];
	
	return 0;
}

