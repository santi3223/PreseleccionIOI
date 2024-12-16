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
		ll m, a, b, c;
		cin >> m >> a >> b >> c;
		ll r1 = m, r2 = m;
		ll res = 0;
		r1 = max(0LL, r1-a);
		res += (m-r1);
		r2 = max(0LL, r2-b);
		res += (m-r2);
		if(r1 > 0 && c > 0){
			ll ori = r1;
			r1 = max(0LL, r1-c);
			c -= (ori-r1);
			res += (ori-r1);
		}
		if(r2 > 0 && c > 0){
			ll ori = r2;
			r2 = max(0LL, r2-c);
			c -= (ori-r2);
			res += (ori-r2);
		}
		cout << res << ed;
	}
	
	return 0;
}
