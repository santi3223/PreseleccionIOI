#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()	
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll a, b, k;
		cin >> a >> b >> k;
		vl arr(a), brr(b);
		vector<pll> coso(k);
		ff(i, 0, k){
			cin >> coso[i].fi;
		}
		ff(i, 0, k){
			cin >> coso[i].se;
		}
		ff(i, 0, k){
			ll x = coso[i].fi-1, y = coso[i].se-1;
			arr[x]++;
			brr[y]++;
		}
		ll c = 0;
		ff(i, 0, k){
			c += k-arr[coso[i].fi-1] - brr[coso[i].se-1]+1;
		}
		cout << c/2 << ed;
	}
	return 0;
}

