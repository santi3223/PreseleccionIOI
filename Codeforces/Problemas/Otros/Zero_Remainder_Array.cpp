#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
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
		map<ll, ll> mp;
		ll maxx = 0;
		ff(i, 0, n){
			if(arr[i] % k == 0){
				continue;
			}
			mp[k-arr[i]%k]++;
			maxx = max(maxx, mp[k-arr[i]%k]);
		}
		ll c = 0;
		for(auto &p : mp){
			if(p.se == maxx){
				c = k*(p.se-1)+p.fi+1;
			}
		}
		cout << c << ed;
	}
}
