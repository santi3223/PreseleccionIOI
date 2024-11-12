#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
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
		ll n;
		cin >> n;
		ll res = 0, c1 = 0, c2 = 0;
		ff(i, 0, n){
			ll x;
			cin >> x;
			if(x % 3 == 0){
				res++;
			}
			else if(x % 3 == 1){
				c1++;
			}
			else{
				c2++;
			}
		}
		ll pares = min(c1, c2);
		res += pares;
		
		c1 -= pares;
		c2 -= pares;
		
		res += c1/3;
		res += c2/3;
		cout << res << ed;
	}
	
	return 0;
}
