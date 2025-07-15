#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back
#define pll pair<ll, ll>
#define fi first
#define se second

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, s;
		cin >> n >> s;
		ll minn = LLONG_MAX, maxx = LLONG_MIN;
		ff(i, 0, n){
			ll x;
			cin >> x;
			minn = min(minn, x);
			maxx = max(maxx, x);
		}
		if(maxx <= s){
			cout << abs(s-minn) << ed;
		}
		else if(s <= minn){
			cout << abs(maxx-s) << ed;
		}
		else{
			ll dista = abs(s-minn), distb = abs(s-maxx);
			ll mi = min(dista, distb), ma = max(dista, distb);
			cout << mi*2+ma << ed;
		}
	}

  return 0;
}

