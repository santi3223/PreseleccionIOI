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
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll n, m, k;
	cin >> n >> m >> k;
	ll partes = k+1, base = n/partes, extra = n%partes;
	ll c = 0;
	ff(i, 0, extra){
		ll sz = base+1;
		c += (sz*(sz+1))/2;
	}
	ff(i, 0, partes-extra){
		ll sz = base;
		c += (sz*(sz+1))/2;
	}
	cout << c;
	return 0;
}
