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
		ll k, l1, r1, l2, r2;
		cin >> k >> l1 >> r1 >> l2 >> r2;
		ll lim = r2/l1;
		ll c = 0, p = 1;
		while(true){
			if(p > lim){
				break;
			}
			ll minx = max(l1, (l2+p-1)/p);
			ll maxx = min(r1, r2/p);
			if(minx <= maxx){
				c += (maxx-minx+1);
			}
			if(p > r2/k){
				break;
			}
			p *= k;
		}
		cout << c << ed;
	}
	
	return 0;
}
