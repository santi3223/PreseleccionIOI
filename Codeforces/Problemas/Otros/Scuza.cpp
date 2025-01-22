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
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, q;
		cin >> n >> q;
		vl sums(n), maxx(n);
		ff(i, 0, n){
			ll x;
			cin >> x;
			if(i == 0){
				sums[i] = x;
			}
			else{
				sums[i] = x + sums[i-1];
			}
		}
		maxx[0] = sums[0];
		ff(i, 1, n){
			maxx[i] = max(sums[i]-sums[i-1], maxx[i-1]);
		}
		while(q--){
			ll k;
			cin >> k;
			if(k < maxx[0]){
				cout << 0 << " ";
				continue;
			}
			ll pos = upper_bound(all(maxx), k) - maxx.begin()-1;
			cout << sums[pos] << " ";
		}
		cout << ed;
	}
	
	
	return 0;
}
