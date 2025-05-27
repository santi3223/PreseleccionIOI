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
		ll c;
		cin >> c;
		ll sq = sqrt(c);
		if(sq*sq == c){
			ll x = sq/2;
			cout << x << " " << sq-x << ed;
		}
		else{
			cout << -1 << ed;
		}
	}
	
}

