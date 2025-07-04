#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;


int main() {
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		vl arr(n), l(n), h(n);
		ff(i, 0, n){
			cin >> arr[i] >> l[i] >> h[i];
		}
		ll p = 0;
		ll minn = m, maxx = m;
		bool ok = true;
		ff(i, 0, n){
			maxx += arr[i]-p;
			minn -= arr[i]-p;
			if(maxx < l[i] || minn > h[i]){
				ok = false;
				break;
			}
			maxx = min(maxx, h[i]);
			minn = max(minn, l[i]);
			p = arr[i];
		}
		if(ok){
			cout << "YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
	}
}
