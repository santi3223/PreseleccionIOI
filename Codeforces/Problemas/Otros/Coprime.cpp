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
ll MOD = 998244353;

int main(){
	IO
	vector<vl> pairs(1001);
	ff(i, 1, 1001){
		ff(j, 1, 1001){
			if(gcd(i, j) == 1){
				pairs[i].pb(j);
			}
		}
	}
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		unordered_map<ll, ll> mp;
		ff(i, 0, n){
			ll x;
			cin >> x;
			mp[x] = i+1;
		}
		ll c = -1;
		ff(i, 1, 1001){
			for(ll j : pairs[i]){
				if(mp[i] > 0 && mp[j] > 0){
					c = max(c, mp[i]+mp[j]);
				}
			}
		}
		cout << c << ed;
	}
	
	return 0;
}
