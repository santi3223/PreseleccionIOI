#include <bits/stdc++.h>
using namespace std;
#define ll int
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
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		ll aa, bb;
		if(!a){
			cout << 0 << ed;
			continue;
		}
		ll res = a+3, other;
		ff(i, (b<2?2-b:0), res){
			bb = b+i;
			aa = a;
			other = i;
			while(aa){
				aa/=bb;
				other++;
			}
			res = min(res, other);
		}
		cout << res << ed;
	}

}
