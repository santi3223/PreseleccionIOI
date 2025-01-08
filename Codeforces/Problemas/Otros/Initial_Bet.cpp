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
	ll c = 0;
	ff(i, 0, 5){
		ll x;
		cin >> x;
		c += x;
	}
	if(c % 5 == 0){
		ll q = c/5;
		if(q > 0){
			cout << q;
			return 0;
		}
	}
	cout << -1;
	
	return 0;
	
}
