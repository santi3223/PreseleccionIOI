#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl a(n), b(n);
		ff(i, 0, n){
			cin >> a[i];
		}
		ff(i, 0, n){
			cin >> b[i];
		}
		vl pref(n+1, 0);
		ff(i, 0, n){
			pref[i+1] = pref[i]+b[i];
		}
		vl suf(n+1, 0);
		for(ll i = n-1; i >= 0; i--){
			suf[i] = suf[i+1]+a[i];
		}
		ll c = LLONG_MAX;
		ff(i, 0, n){
			ll bb = max(suf[i+1], pref[i]);
			c = min(c, bb);
		}
		cout << c << ed;
	}
}
