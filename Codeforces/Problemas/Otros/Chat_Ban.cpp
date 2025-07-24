#include <bits/stdc++.h>
//#include "boxes.h"
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(int aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

ll tot(ll x){
	return x * (x+1)/2;
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll k, x;
		cin >> k >> x;
		ll l = 1, r = 2*k-1, ans = 2*k-1;
		bool fail = false;
		while(l <= r){
			ll mid = l+(r-l)/2;
			if(mid >= k){
				fail = (tot(k)+tot(k-1)-tot(2*k-1-mid) >= x);
			}
			else{
				fail = (tot(mid) >= x);
			}
			if(fail){
				ans = mid;
				r = mid-1;
			}
			else{
				l = mid+1;
			}
		}
		cout << ans << ed;
	}
}
