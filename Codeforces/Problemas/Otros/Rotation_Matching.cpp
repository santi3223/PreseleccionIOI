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
	ll n;
	cin >> n;
	vl arr(n+1), brr(n+1), pos(n+1);
	ff(i, 1, n+1){
		cin >> arr[i];
		pos[arr[i]] = i;
	}
	ff(i, 1, n+1){
		cin >> brr[i];
	}
	map<ll, ll> mp;
	ff(i, 1, n+1){
		ll x = pos[brr[i]]-i;
		if(x < 0){
			x += n;
		}
		mp[x]++;
	}
	ll maxx = 0;
	for(auto &p : mp){
		maxx = max(maxx, p.se);
	}
	cout << maxx;
	
}
