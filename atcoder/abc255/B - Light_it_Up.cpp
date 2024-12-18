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
ll MOD = 1e9+7;

int main(){
	IO
	ll q, n;
	cin >> q >> n;
	vector<bool> ok(q, false);
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		x--;
		ok[x] = true;
	}
	vector<pll> coords;
	vector<pll> key;
	ll w = 0;
	
	while(q--) {
		ll x, y;
		cin >> x >> y;
		if (ok[w]) {
			key.push_back({x, y});
		} else {
			coords.push_back({x, y});
		}
		w++;
	}
	
	long double minn = 0;
	for(const auto& [x1, y1] : coords){
		long double mindis = MOD;
		for(const auto& [x2, y2] : key){
			long double x = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
			mindis = min(mindis, x);
		}
		
		minn = max(minn, mindis);
	}
	
	cout << fixed << setprecision(10) << minn << "\n";
	
	return 0;
}
