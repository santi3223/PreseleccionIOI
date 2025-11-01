#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define vb vector<bool>
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		bool ok = false;

		for (ll y = 0; y <= n / 2021; y++){
			ll resto = n - 2021 * y;
			if (resto % 2020 == 0){
				ok = true;
				break;
			}
		}

		cout << (ok ? "YES" : "NO") << ed;
	}
}
