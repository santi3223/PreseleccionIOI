#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main() {
	IO
	ll t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		ll n = a.size(), m = b.size();
		ll lc = lcm(n, m);
		bool ok = true;
		string greatest = a;
		if(n < m){
			greatest = b;
		}
		string original = greatest;
		ll sz = original.size();
		ll orsize = original.size();
		ff(i, 0, lc){
			if(a[i%n] != b[i%m]){
				ok = false;
				break;
			}
			if(i > sz){
				greatest += original;
				sz += orsize;
			}
		}
		if(!ok){
			cout << -1 << ed;
		}
		else{
			cout << greatest << ed;
		}
	}
	return 0;
}
