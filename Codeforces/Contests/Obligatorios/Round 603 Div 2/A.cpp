#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		vl arr(3);
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(all(arr));
		ll a = arr[0], b = arr[1], c = arr[2];
		ll x = a+b+c;
		cout << min(x/2, a+b) << ed;

	}
	
	return 0;
}
