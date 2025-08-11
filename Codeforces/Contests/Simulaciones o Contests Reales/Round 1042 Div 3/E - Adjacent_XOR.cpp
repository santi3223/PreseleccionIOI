#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl a(n), b(n);
		ff(i, 0, n){
			cin >> a[i];
		}
		ff(i, 0, n){
			cin >> b[i];
		}
		bool ok = true;
		ff(i, 0, n){
			if(a[i] == b[i]){
				continue;
			}
			if(a[i] != b[i] && i == n-1){
				ok = false;
				break;
			}
			//cout << "I " << i << ", XOR ";
			ll x = a[i]^b[i];
			//cout << x << ed;
			if(x != b[i+1] && x != a[i+1]){
				ok = false;
				break;
			}
		}
		
		cout << (ok ? "YES" : "NO") << ed;
	}
}
