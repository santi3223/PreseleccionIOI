#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		string x;
		cin >> x;
		ll c1 = 0, c0 = 0;
		ff(i, 0, n){
			if(x[i] == '0'){
				c0++;
			}
			else{
				c1++;
			}
		}
		if(c1 != 0){
			c1 /= 2;
		}
		if(c0 != 0){
			c0 /= 2;
		}
		//cout << c0 << " " << c1 << ed;
		ll maxx = max(c0, c1);
		ll minn = min(c0, c1);
		ll low = maxx-minn;
		if(low <= k && k <= maxx+minn){
			if(((c0+c1) % 2 == 0 && k % 2 == 0) || ((c0+c1) % 2 != 0 && k % 2 != 0)){
				cout << "YES" << ed;
			}
			else{
				cout << "NO" << ed;
			}
		}
		else{
			cout << "NO" << ed;
		}
	}
	
}

