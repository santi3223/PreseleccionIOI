#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main() {
	ll t;
	cin >> t;
	while(t--){
		ll a, b, x, y;
		cin >> a >> b >> x >> y;
		if(a == b){
			cout << 0 << ed;
			continue;
		}
		if(a > b){
			if(a-1 == b && a % 2 != 0){
				cout << y << ed;
			}
			else{
				cout << -1 << ed;
			}
			continue;
		}
		ll cur = 0;
		while(a < b){
			if(a % 2 == 0){
				cur += min(x, y);
			}
			else{
				cur += x;
			}
			a++;
		}
		cout << cur << ed;
		
	}
}
