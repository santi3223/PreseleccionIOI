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
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

ll suma(ll n){
	ll c = 0;
	while(n > 0){
		c += n%10;
		n /= 10;
	}
	return c;
}

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, s;
		cin >> n >> s;
		if(suma(n) <= s){
			cout << 0 << ed;
			continue;
		}
		ll p = 1, res = 0;
		ff(i, 0, 18){
			ll cur = (n/p)%10;
			ll rest = p*(10-cur);
			n += rest;
			res += rest;
			if(suma(n) <= s){
				break;
			}
			p *= 10;
		}
		cout << res << ed;
		
	}
	
	return 0;
}
