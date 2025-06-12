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

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, k, z;
		cin >> n >> k >> z;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll res = 0, sum = 0, maxx = 0;
		ff(i, 0, z+1){
			ll p = k-2*i;
			if(p < 0){
				continue;
			}
			maxx = 0;
			sum = 0;
			ff(j, 0, p+1){
				if(j < n-1){
					maxx = max(maxx, arr[j]+arr[j+1]);
				}
				sum += arr[j];
			}
			res = max(res, sum+maxx*i);
		}
		cout << res << ed;
	}
}
