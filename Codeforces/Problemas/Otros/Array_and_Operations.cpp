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
		ll n, k;
		cin >> n >> k;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		sort(all(arr));
		ll c = 0;
		ff(i, 0, n-2*k){
			c += arr[i];
		}
		ff(i, 0, k){
			c += arr[n-2*k+i]/arr[n-k+i];
		}
		cout << c << ed;
	}
}
