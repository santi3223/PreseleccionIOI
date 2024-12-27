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
		ll n, x, y;
		cin >> n >> x >> y;
		vl arr(n);
		ll sum = 0;
		ff(i, 0, n){
			cin >> arr[i];
			sum += arr[i];
		}
		sort(all(arr));
		ll low = sum-y;
		ll up = sum-x;
		ll c = 0;
		ff(i, 0, n-1){
			ll st = lower_bound(arr.begin()+i+1, arr.end(), low-arr[i]) - arr.begin();
			ll fin = upper_bound(arr.begin()+i+1, arr.end(), up-arr[i]) - arr.begin();
			c += (fin-st);
		}
		cout << c << ed;
		
	}
	
	return 0;
}
