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
		ll x, y, k;
		cin >> x >> y >> k;
		ll xdiv = x / k, ydiv = y/k;
		if(x % k != 0){
			xdiv++;
		}
		if(y % k != 0){
			ydiv++;
		}
		if(ydiv >= xdiv){
			cout << 2 * ydiv;
		}
		else{
			cout << 2 * xdiv - 1;
		}
		cout << ed;
	}
	
	return 0;
	
}
