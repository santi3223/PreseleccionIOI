#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll c, m, x;
		cin >> c >> m >> x;
		ll l = 0, r = min(c, m);
		ll ans = 0;
		while(l <= r){
			ll mid = (l+r)/2;
			if(c+m+x-2*mid >= mid){
				l = mid+1;
				ans = mid;
			}
			else{
				r = mid-1;
			}
		}
		cout << ans << ed;
	}
}
