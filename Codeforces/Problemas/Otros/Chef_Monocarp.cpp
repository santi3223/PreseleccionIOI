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
#define rall(aaa) aaa.rbegin(), aaa.rend()
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
			arr[i]--;
		}
		sort(all(arr));
		vector<vl> dp(n+5, vl(2*n+5, LLONG_MAX));
		dp[0][0] = 0;
		ff(i, 0, n+1){
			ff(j, 0, 2*n-1){
				if(dp[i][j] != LLONG_MAX){
					if(i < n){
						dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+abs(arr[i]-j));
					}
					dp[i][j+1] = min(dp[i][j+1], dp[i][j]);
				}
			}
		}
		cout << dp[n][2*n-1] << ed;
	}
}
