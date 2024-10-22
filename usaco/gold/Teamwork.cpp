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
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	freopen("teamwork.in","r",stdin);
	freopen("teamwork.out","w",stdout);
	IO
	ll n, k;
	cin >> n >> k;
	vl arr(n), dp(n);
	ff(i, 0, n){
		cin >> arr[i];
		dp[i] = arr[i];
	}
	ff(i, 1, n){
		ll maxx = arr[i];
		ff(nk, 0, k){
			ll j = i-nk;
			if(j < 0){
				break;
			}
			maxx = max(maxx, arr[j]);
			if(j > 0){
				dp[i] = max(dp[i], dp[j-1] + (maxx*(nk+1)));
			}
			else{
				dp[i] = max(dp[i], maxx*(nk+1));
			}
		}
	}
	cout << dp[n-1];
	
	return 0;
}
