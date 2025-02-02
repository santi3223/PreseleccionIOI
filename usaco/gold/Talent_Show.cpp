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
ll MAX = 250000;

int main(){
	IO
	freopen("talent.in", "r", stdin);
	freopen("talent.out", "w", stdout);
	ll n, ww;
	cin >> n >> ww;
	vl peso(n), talent(n);
	ff(i, 0, n){
		cin >> peso[i] >> talent[i];
	}
	vl dp(MAX+5, -1);
	dp[0] = 0;
	ll maxx = LLONG_MIN;
	ff(i, 0, n){
		for(ll w = MAX; w >= peso[i]; w--){
			if(dp[w-peso[i]] != -1){
				dp[w] = max(dp[w], dp[w-peso[i]]+talent[i]);
				maxx = max(maxx, w);
			}
		}
	}
	
	ll best = 0;
	ff(w, ww, maxx+1){
		if(dp[w] != -1){
			best = max(best, dp[w]*1000LL / w);
		}
	}
	cout << best;
	
	return 0;
}
