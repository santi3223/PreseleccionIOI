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
 
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<pll> arr(n);
		ff(i, 0, n){
			cin >> arr[i].fi >> arr[i].se;
		}
		sort(all(arr));
		pll cur = {0, 0};
		string ans = "";
		bool ok = true;
		ff(i, 0, n){
			ll r = arr[i].fi-cur.fi;
			ll u = arr[i].se-cur.se;
			if(r < 0 || u < 0){
				cout << "NO" << ed;
				ok = false;
				break;
			}
			ans += string(r, 'R');
			ans += string(u, 'U');
			cur = arr[i];
		}
		if(ok){
			cout << "YES" << ed << ans << ed;
		}
	}
 
}
 
