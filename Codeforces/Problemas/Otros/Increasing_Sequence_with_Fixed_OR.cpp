#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr;
		for(ll i = 62; i >= 0; i--){
			ll x = 1LL << i;
			if((n & x) == x && x != n){
				arr.pb(n-x);
			}
		}
		arr.pb(n);
		cout << arr.size() << ed;
		ff(i, 0, arr.size()){
			cout << arr[i] << " ";
		}
		cout << ed;
	}
	
}
