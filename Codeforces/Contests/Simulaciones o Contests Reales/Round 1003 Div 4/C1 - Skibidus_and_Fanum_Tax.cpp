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
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		vl arr(n), b(m);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ff(i, 0, m){
			cin >> b[i];
		}
		bool ok = true;
		arr[0] = min(arr[0], b[0]-arr[0]);
		ll pre = arr[0];
		ff(i, 1, n){
			ll a = arr[i], x = b[0]-arr[i];
			ll minn = LLONG_MAX;
			if(a >= pre){
				minn = min(minn, a);
			}
			if(x >= pre){
				minn = min(minn, x);
			}
			if(minn == LLONG_MAX){
				ok = false;
				break;
			}
			pre = minn;
		}
		if(ok	){
			cout << "YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
	}
	
	return 0;
}
