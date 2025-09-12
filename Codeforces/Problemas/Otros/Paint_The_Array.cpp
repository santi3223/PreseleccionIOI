#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back
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
		vl g(arr.begin(), arr.begin()+2);
		ff(i, 0, n){
			g[i%2] = gcd(g[i%2], arr[i]);
		}
		vb ok(2, true);
		ff(i, 0, n){
			ok[i%2] = ok[i%2] && (arr[i] % g[i%2^1] > 0);
		}
		ll ans = 0;
		ff(i, 0, 2){
			if(ok[i]){
				ans = max(ans, g[i^1]);
			}
		}
		cout << ans << ed;
	}

}
