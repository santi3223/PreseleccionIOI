#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define ed "\n"
#define pb push_back
#define vb vector<bool>

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
		ll c = -1;
		ff(d, 1, n+1){
			if(n % d == 0){
				ll maxx = LLONG_MIN, minn = LLONG_MAX;
				for(ll i = 0; i < n; i += d){
					ll sm = 0;
					ff(j, i, i+d){
						sm += arr[j];
					}
					maxx = max(maxx, sm);
					minn = min(minn, sm);
				}
				c = max(c, maxx-minn);
			}
		}
		cout << c << ed;
	}
 
}
 
