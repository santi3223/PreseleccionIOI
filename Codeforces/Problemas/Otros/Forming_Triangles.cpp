#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		map<ll, ll> mp;
		ff(i, 0, n){
			ll x;
			cin >> x;
			mp[x]++;
		}
		ll ans = 0, sum = 0;
		for(auto &it : mp){
			ll c = it.se;
			if(c >= 3){
				ans += c*(c-1)*(c-2)/6;
			}
			if(c >= 2){
				ans += c*(c-1)/2*sum;
			}
			sum += c;
		}
		cout << ans << ed;
	}
}
