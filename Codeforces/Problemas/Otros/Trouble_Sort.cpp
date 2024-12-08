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
		ll n;
		cin >> n;
		vl arr(n), brr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		bool c1 = false, c0 = false;
		ff(i, 0, n){
			ll x;
			cin >> x;
			if(x == 1){
				c1 = true;
			}
			if(x == 0){
				c0 = true;
			}
		}
		if(c1 && c0){
			cout << "Yes" << ed;
			continue;
		}
		vl sorted = arr;
		sort(all(sorted));
		bool ok = true;
		ff(i, 0, n){
			if(arr[i] != sorted[i]){
				ok = false;
				break;
			}
		}
		if(ok){
			cout << "Yes" << ed;
		}
		else{
			cout << "No" << ed;
		}
	}
	return 0;
}
