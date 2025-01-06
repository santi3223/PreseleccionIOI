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
ll MOD = 998244353;

int main(){
	IO
	ll q, k;
	cin >> q >> k;
	vl dp(k+1, 0);
	dp[0] = 1;
	unordered_map<ll, ll> count;
	while(q--){
		char c;
		ll x;
		cin >> c >> x;
		if(c == '+'){
			for(ll i = k; i >= x; i--){
				dp[i] += dp[i-x];
				if(dp[i] >= MOD){
					dp[i] %= MOD;
				}
			}
			count[x]++;
		}
		else{
			if(count[x] > 0){
				ff(i, x, k+1){
					dp[i] = dp[i]-dp[i-x]+MOD;
					if(dp[i] >= MOD){
						dp[i] %= MOD;
					}
				}
				count[x]--;
			}
		}
		cout << dp[k] << ed;
	}
	
	return 0;
	
}
