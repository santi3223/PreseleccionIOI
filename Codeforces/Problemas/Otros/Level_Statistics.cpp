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
ll MOD = 998244353;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll x = 0, y = 0;
		bool ok = true;
		ff(i, 0, n){
			ll a, b;
			cin >> a >> b;
			if(a < x || b < y || b-y > a-x){
				ok = false;
			}
			x = a;
			y = b;
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
