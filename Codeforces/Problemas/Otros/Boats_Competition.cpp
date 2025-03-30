#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define vb vector<bool>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		unordered_map<ll, ll> c;
		ff(i, 0, n){
			ll x;
			cin >> x;
			c[x]++;
		}
		ll maxx = 0;
		ff(id, 2, 2*n+1){
			ll cur = 0;
			ff(i, 1, (id+1)/2){
				if(id-i > n){
					continue;
				}
				cur += min(c[i], c[id-i]); 
			}
			if(id%2 == 0){
				cur += c[id/2]/2;
			}
			maxx = max(maxx, cur);
		}
		
		cout << maxx << ed;
	}
	
	return 0;
}
