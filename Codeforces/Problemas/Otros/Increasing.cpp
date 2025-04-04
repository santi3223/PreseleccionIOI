#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define vb vector<bool>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		unordered_map<ll, ll> mp;
		bool ok = true;
		ff(i, 0, n){
			ll x;
			cin >> x;
			mp[x]++;
			if(mp[x] > 1){
				ok = false;
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
	return 0;
}
