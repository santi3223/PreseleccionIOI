#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;


int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, x, y;
		cin >> n >> x >> y;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		map<pll, ll> mp;
		ll c = 0;
		ff(i, 0, n){
			ll a = arr[i]%x, b = arr[i]%y;
			ll k = (x-a)%x;
			c += mp[{k, b}];
			mp[{a, b}]++;
		}
		cout << c << ed;
	}
}
