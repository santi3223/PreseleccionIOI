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
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		vl ok(105, 0);
		ll n;
		cin >> n;
		ff(i, 0, n){
			ll x;
			cin >> x;
			ok[x]++;
		}
		ff(i, 0, 105){
			if(ok[i] == 0){
				cout << i << ed;
				break;
			}
		}
	}
 
}
 
