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

ll val(ll x){
	ll c = 0;
	while(x != 0){
		c += (x % 10);
		x /= 10;
	}
	return c;
}

int main(){
	IO
	vl ans(200005, 0);
	ans[1] = 1;
	ff(i, 2, 200005){
		ans[i] = ans[i-1] + val(i);
	}
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << ans[n] << ed;
	}
	
	return 0;
}
