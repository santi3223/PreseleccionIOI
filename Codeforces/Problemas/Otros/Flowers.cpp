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
    ll t, k;
    cin >> t >> k;
    vl dp(1e5+5), psum(1e5+5);
    dp[0] = 1;
    ff(i, 1, 1e5+5){
		if(i < k){
			dp[i] = dp[i-1];
		}
		else{
			dp[i] = (dp[i-1]+dp[i-k]);
			if(dp[i] > MOD){
				dp[i] %= MOD;
			}
		}
	}
	ff(i, 1, 1e5+5){
		psum[i] = psum[i-1]+dp[i];
		if(psum[i] > MOD){
			psum[i] %= MOD;
		}
	}
    while(t--){
		ll a, b;
		cin >> a >> b;
		cout << (psum[b]-psum[a-1]+MOD)%MOD << ed;
	}
	
	return 0;
}
