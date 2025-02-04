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
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

vl dp(1e6+5);

int main(){
	IO
	vl match = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	ll c = 43;
	dp[0] = 6; dp[1] = 2; dp[2] = 5; dp[3] = 5; dp[4] = 4; dp[5] = 5;
	dp[6] = 6; dp[7] = 3; dp[8] = 7; dp[9] = 6;
	
	ff(i, 10, 1e6+1){
		ll val = 0, x = i;
		while(x > 0){
			val += match[x%10];
			x /= 10;
		}
		dp[i] = val;
		for(ll j = 2; j * j <= i; j++){
			if(i % j == 0){
				dp[i] = min(dp[i], dp[j] + dp[i/j] + 2);
			}
		}
		ff(j, 1, i/2+1){
			dp[i] = min(dp[i], dp[j] + dp[i-j] + 2);
		}
		c += dp[i];
	}
	cout << c << ed;
	
	return 0;
}
