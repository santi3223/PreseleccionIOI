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
		ll a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		ll c1 = 0, c2 = 0;
		ll oria = a, orib = b;
		ll cur = n, a1 = a, b1 = b;
		a1 -= min(a1-x, cur);
		cur -= (oria-a1);
		b1 -= cur;
		if(b1 < y){
			b1 = y;
		}
		c1 = a1*b1;
		b -= min(b-y, n);
		n -= (orib-b);
		a -= n;
		if(a < x){
			a = x;
		}
		c2 = a*b;
		cout << min(c1, c2) << ed;
	}
	
	return 0;
}
		
