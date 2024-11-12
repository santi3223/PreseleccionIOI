#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
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
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, x;
		cin >> n >> x;
		ll sum = 0;
		ll maxx = 0;
		ff(i, 0, n){
			ll gg;
			cin >> gg;
			sum += gg;
			maxx = max(maxx, gg);
		}
		cout << max(maxx, (sum+x-1)/x) << ed;
	}
	
	return 0;
}
