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


int main(){
	IO
	ll n;
	cin >> n;
	vl arr(n+1);
	ff(i, 1, n+1){
		cin >> arr[i];
	}
	vector<vl> dp(n+1, vl(n+1, INT_MIN));
	dp[0][0] = 0;
	ff(i, 1, n+1){
		ff(k, 0, i+1){
			dp[i][k] = dp[i-1][k];
			if(k != 0 && dp[i-1][k-1] + arr[i] >= 0){
				dp[i][k] = max(dp[i][k], dp[i-1][k-1]+arr[i]);
			}

		}
	}
	ll maxx = 0;
	ff(k, 0, n+1){
		//cout << dp[n][k] << " ";
		if(dp[n][k] >= 0){
			maxx = k;
		}
	}
	cout << maxx;
	
	return 0;
}
