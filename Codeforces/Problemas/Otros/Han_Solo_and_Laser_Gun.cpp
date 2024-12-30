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

int main(){
	IO
	ll n, x, y;
	cin >> n >> x >> y;
	set<pll> pend;
	ff(i, 0, n){
		ll a, b;
		cin >> a >> b;
		a -= x;
		b -= y;
		if(a == 0){
			pend.insert({1, 0});
		}
		else if(b == 0){
			pend.insert({0, 1});
		}
		else{
			ll g = gcd(a, b);
			a /= g;
			b /= g;
			if(a < 0){
				a = -a;
				b = -b;
			}
			else if(a == 0 && b < 0){
				b = -b;
			}
			pend.insert({a, b});
		}
	}

	cout << pend.size();
	
	return 0;
}
