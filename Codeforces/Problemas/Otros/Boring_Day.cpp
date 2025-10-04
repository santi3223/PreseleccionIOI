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
		ll n, l, r;
		cin >> n >> l >> r;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll ans = 0, c = 0;
		ll L = 0, R = 0;
		while(L < n){
			while(R < n && c < l){
				c += arr[R];
				R++;
			}
			if(l <= c && c <= r){
				ans++;
				L = R;
				c = 0;
			}
			else{
				c -= arr[L];
				L++;
			}
		}
		cout << ans << ed;
	}
 
}
 
