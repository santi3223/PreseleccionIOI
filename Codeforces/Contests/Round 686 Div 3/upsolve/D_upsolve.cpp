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

vl primes;
void sieve(ll n){
	vb prime(n+1, true); 
	for(ll p = 2; p * p <= n; p++){
		if(prime[p] == true){
			for(ll i = p * p; i <= n; i += p){
				prime[i] = false;
			}
		}
	} 
	ff(p, 2, n+1){
		if(prime[p]){
			primes.push_back(p);
		}
	}
}

int main(){
	IO
	sieve(100005);
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<pll> res;
		ll c = 1, pos = 0, x = n;
		
		while(primes[pos]*primes[pos] <= x){
			ll prim = primes[pos];
			if(x % prim == 0){
				ll nc = 0;
				c *= prim;
				while(x % prim == 0){
					nc++;
					x /= prim;
				}
				res.pb({nc, prim});
			}
			pos++;
		}
		
		if(x != 1){
			res.pb({1, x});
			c *= x;
		}
		sort(all(res));
		if(c == 1){
			cout << 1 << ed << n << ed;
			continue;
		}
		
		ll c1 = 0;
		vl gg;
		ff(i, 0, res.size()){
			ff(j, 0, res[i].fi - c1){
				gg.pb(c);
			}
			c1 = res[i].fi;
			c /= res[i].se;
		}
		
		sort(all(gg));
		cout << gg.size() << ed;
		ff(i, 0, gg.size()){
			cout << gg[i] << " ";
		}
		cout << ed;
	}
	
	return 0;
}
