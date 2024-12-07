#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, l, r;
		cin >> n >> l >> r;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		sort(all(arr));
		ll c = 0;
		ff(i, 0, n){
			ll lo = lower_bound(arr.begin()+i+1, arr.end(), l-arr[i]) - arr.begin();
			ll hi = upper_bound(arr.begin()+i+1, arr.end(), r-arr[i]) - arr.begin() - 1;
			if(lo <= hi){
				c += (hi-lo+1);
			}
		}
		cout << c << ed;
	}
	return 0;
}
