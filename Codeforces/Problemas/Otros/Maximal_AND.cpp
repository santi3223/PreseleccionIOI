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
	ll t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		vl arr(n), c(31, 0);
		ff(i, 0, n){
			cin>> arr[i];
			for(ll j = 30; j >= 0; j--){
				if((arr[i] & (1 << j)) != 0){
					c[j]++;
				}
			}
		}
		ll ans = 0;
		for(ll i = 30; i >= 0; i--){
			ll q = n-c[i];
			if(q <= k){
				k -= q;
				ans += (1 << i);
			}
		}
		cout << ans << ed;
	}
	
	
	return 0;
}
