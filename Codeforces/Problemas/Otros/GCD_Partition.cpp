#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define ed "\n"
#define pb push_back
#define vb vector<bool>
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ll s = 0;
		ff(i, 0, n){
			cin >> arr[i];
			s += arr[i];
		}
		ll c = 0, ans = 1;
		ff(i, 0, n-1){
			c += arr[i];
			s -= arr[i];
			ans = max(ans, gcd(s, c));
		}
		cout << ans << ed;
	}
 
}
 
