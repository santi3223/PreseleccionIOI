#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	IO
	ll n, k;
	cin >> n >> k;
	vl arr(n);
	ll maxx = 0;
	map<ll, ll> mp;
	ff(i, 0, n){
		ll x;
		cin >> x;
		if(x > maxx){
			maxx = x;
			mp.clear();
			mp[i+1] = 1;
		}
		else if(x == maxx){
			mp[i+1] = 1;
		}
	}
	ff(i, 0, k){
		ll x;
		cin >> x;
		if(mp[x] == 1){
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
	
	return 0;
}
