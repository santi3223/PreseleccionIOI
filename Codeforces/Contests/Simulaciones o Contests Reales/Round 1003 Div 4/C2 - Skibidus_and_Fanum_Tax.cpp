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
		vl arr(n), b(m+1);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ff(i, 0, m){
			cin >> b[i];
		}
		b[m] = LLONG_MAX;
		sort(all(b));
		bool ok = true;
		arr[0] = min(arr[0], b[0]-arr[0]);
		ll pre = arr[0];
		//cout << 0 << " " << arr[0] << ed;
		ff(i, 1, n){
			ll pos = lower_bound(all(b), pre+arr[i])-b.begin();
		//	cout << i << "  " << pre-arr[i] << "   " << arr[i] << "  " << pos << " " << b[pos]; 
			ll a = arr[i], x = b[pos]-arr[i];
			if(pos == m){
				x = b[pos-1]-arr[i];
			}
			
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
			//cout << "->> " <<pre << ed;
		}
		if(ok){
			cout << "YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
	}
	
	return 0;
}
