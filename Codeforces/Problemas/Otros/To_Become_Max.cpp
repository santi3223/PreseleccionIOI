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
		ll n, k;
		cin >> n >> k;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll l = 0, r = *max_element(all(arr))+k, ans = 0;
		while(l <= r){
			ll mid = (l+r)/2;
			bool ok = false;
			ff(i, 0, n){
				vl minn(n);
				minn[i] = mid;
				ll c = 0;
				ff(j, i, n){
					if(minn[j] <= arr[j]) break;
					if(j+1 >= n){
						c = k+1;
						break;
					}
					c += minn[j]-arr[j];
					minn[j+1] = max(0LL, minn[j]-1);
				}
				if(c <= k){
					ok = true;
					break;
				}
			}
			if(ok){
				ans = mid;
				l = mid+1;
			}
			else{
				r = mid-1;
			}
		}
		cout << ans << ed;
	}
	
}
