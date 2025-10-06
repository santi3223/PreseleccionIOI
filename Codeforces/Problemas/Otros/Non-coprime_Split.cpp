#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define ed "\n"
#define pb push_back

ll min_div(ll n){
	for(ll d = 2; d*d <= n; d++){
		if(n % d == 0){
			return d;
		}
	}
	return n;
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll l, r;
		cin >> l >> r;
		bool ok = false;
		ff(x, l, r+1){
			ll mid = min_div(x);
			if(mid != x){
				cout << mid << " " << (x-mid) << ed;
				ok = true;
				break;
			}
		}
		if(!ok){
			cout << -1 << ed;
		}
	}
 
}
 
