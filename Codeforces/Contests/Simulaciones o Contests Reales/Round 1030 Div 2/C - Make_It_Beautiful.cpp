#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

ll popcount(ll x){
	//cout << "POP " << __builtin_popcount(x) << ed;
	return __builtin_popcount(x);
}

ll left(ll x){
	//cout << "CTZ " << __builtin_ctzll(~x) << ed;
	//cout << "OTH " << __builtin_ctzll(x) << ed;
	//cout << "P2 " << __builtin_clzll(~x) << ed;
	//cout << "PP " << __builtin_clzll(x) << ed;
	return __builtin_ctzll(~x);
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		vl arr(n), op;
		ll res = 0;
		ff(i, 0, n){
			cin >> arr[i];
			res += popcount(arr[i]);
			//cout << "Base " << res << ed;
			ll cur = arr[i];
			while(true){
				ll p = left(cur);
				ll x = 1LL << p;
				//cout << "X" << x << ed;
				if(k < x){
					break;
				}
				op.pb(x);
				cur += x;
			}
		}
		//cout << ed;
		sort(all(op));
		ff(i, 0, op.size()){
			if(op[i] > k){
				break;
			}
			//cout << op[i] << " ";
			res++;
			k -= op[i];
		}
		//cout << ed;
		cout << res << ed;
	}
}
