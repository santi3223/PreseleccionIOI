#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<pair<ll, pll>> res;
		if(n == 1){
			cout << 1 << ed << "1 1 1" << ed;
			continue;
		}
		cout << 2*n-1 << ed;
		cout << "1 1 " << n << ed;
		ll a = n-1, b = n;
		ff(i, 2, n+1){
			cout << i << " " << 1 << " " << a << ed;
			cout << i << " " << b << " " << n << ed;
			a--;
			b--;
		}
	}
}
