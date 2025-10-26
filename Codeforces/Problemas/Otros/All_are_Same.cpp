#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define vb vector<bool>
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		bool inf = true;
		ll minn = arr[0];
		ff(i, 1, n){
			if(arr[i] != arr[0]){
				inf = false;
				break;
			}
			minn = min(minn, arr[i]);
		}
		if(inf){
			cout << -1 << ed;
			continue;
		}
		sort(all(arr));
		ll c = 0;
		ff(i, 0, n){
			c = gcd(c, arr[i]-minn);
		}
		cout << c << ed;
	}
}
 
