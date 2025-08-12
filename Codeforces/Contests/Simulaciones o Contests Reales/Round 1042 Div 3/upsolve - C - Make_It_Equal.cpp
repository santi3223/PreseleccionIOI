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
		ll n, k;
		cin >> n >> k;
		vl arr(n);
		map<ll, ll> count;
		ff(i, 0, n){
			ll x;
			cin >> x;
			x %= k;
			count[min(x, abs(x-k))]++;
		}
		bool ok = true;
		ff(i, 0, n){
			ll x;
			cin >> x;
			x %= k;
			x = min(x, abs(x-k));
			//cout << x << ed;
			if(count[x] == 0){
				ok = false;
			}
			else{
				count[x]--;
			}
		}
		if(ok){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << ed;
	}
}
