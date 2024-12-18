#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll n;
	cin >> n;
	ll cur = 2;
	vector<vl> tri(n+1);
	tri[0].pb(1);
	cout << 1 << ed;
	n--;
	while(n--){
		cout << 1 << " ";
		tri[cur].pb(1);
		ff(i, 1, cur-1){
			ll x = tri[cur-1][i-1]+tri[cur-1][i];
			cout << x << " ";
			tri[cur].pb(x);
		}
		cout << 1 << ed;
		tri[cur].pb(1);
		cur++;
	}
	return 0;
}
