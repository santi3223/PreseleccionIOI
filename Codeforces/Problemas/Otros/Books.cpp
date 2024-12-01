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
ll N = 1e6+5;

int main(){
	IO
	ll n, k;
	cin >> n >> k;
	vl psum(n, 0);
	ff(i, 0, n){
		ll x;
		cin >> x;
		psum[i] += x;
		if(i != 0){
			psum[i] += psum[i-1];
		}
	}
	ll maxx = 0;
	ff(i, 0, n){
		ll prev = 0;
		if(i != 0){
			prev = psum[i-1];
		}
		
		ll pos = upper_bound(psum.begin() + i, psum.end(), k+prev) - psum.begin()-i;
		maxx = max(maxx, pos);
	}
	cout << maxx;
	
	return 0;
}
