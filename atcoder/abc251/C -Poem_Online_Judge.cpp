#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
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
	ll n;
	cin >> n;
	map<string, ll> mp;
	map<string, ll>marked;
	vector<pair<bool, ll>> arr;
	while(n--){
		string s;
		ll t;
		cin >> s >> t;
		if(marked[s] != 1){
			arr.pb({true, t});
			mp[s] = t;
			marked[s] = 1;
		}
		else{
			arr.pb({false, 0});
		}
	}
	ll maxx = 0;
	for(auto &x : mp){
		maxx = max(maxx, x.se);
	}
	ll focus = maxx;
	ll pos = 0;
	ll ss = arr.size();
	ff(i, 0, ss){
		if(arr[i].se == focus && arr[i].fi){
			pos = i;
			break;
		}
	}
	cout << pos+1;
	
	
	return 0;
}
