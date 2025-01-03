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

ll minn(ll x){
	ll m = 10;
	while(x != 0){
		m = min(m, x%10);
		x /= 10;
	}
	return m;
}
ll maxx(ll x){
	ll m = 0;
	while(x != 0){
		m = max(m, x%10);
		x /= 10;
	}
	return m;
}

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll a, n;
		cin >> a >> n;
		ll c = a;
		n--;
		while(n--){
			ll x = minn(c), y = maxx(c);
			if(x == 0){
				break;
			}
			c = c + x*y;
		}
		cout << c << ed;
	}
	
	return 0;
	
}
