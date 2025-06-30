#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 998244353;

int main(){
	ll t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		ll c = 1;
		ll n = str.size();
		ll k = str.size();
		ll l = 0;
		while(l < n){
			ll r = l+1;
			while(r < n && str[l] == str[r]){
				r++;
			}
			c = (c*(r-l)) % MOD;
			k--;
			l = r;
		}
		ff(i, 1, k+1){
			c = (c*i)%MOD;
		}
		cout << k << " " << c << ed;
	}
}
