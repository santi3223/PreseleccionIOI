#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, m, a, b;
		cin >> n >> m >> a >> b;
		
		ll ln = 1, rn = n, lm = 1, rm = m;
		ln = a;
		ll distn = rn-ln+1, distm = rm-lm+1;
		ll minn = INT_MAX;
		minn = min(minn, (ll)(ceil((long double)log2(distn))+ceil((long double)log2(distm))+1LL));
		
		ln = 1, rn = n, lm = 1, rm = m;
		rn = a;
		distn = rn-ln+1, distm = rm-lm+1;
		minn = min(minn, (ll)(ceil((long double)log2(distn))+ceil((long double)log2(distm))+1LL));
		
		ln = 1, rn = n, lm = 1, rm = m;
		lm = b;
		distn = rn-ln+1, distm = rm-lm+1;
		minn = min(minn, (ll)(ceil((long double)log2(distn))+ceil((long double)log2(distm))+1LL));
		
		ln = 1, rn = n, lm = 1, rm = m;
		rm = b;
		distn = rn-ln+1, distm = rm-lm+1;
		minn = min(minn, (ll)(ceil((long double)log2(distn))+ceil((long double)log2(distm))+1LL));
		
		cout << minn << ed;
	}
	
	return 0;
}

