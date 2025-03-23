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
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n+1, 0);
		ff(i, 0, n){
			char c;
			cin >> c;
			arr[i+1] = arr[i]+(c-'0');
		}
		map<ll, ll> mp;
		ff(i, 0, n+1){
			mp[arr[i]-i]++;
		}
		ll c = 0;
		for(auto i : mp){
			c += i.se*(i.se-1)/2;
		}
		cout << c << ed;
	}
	
	
	return 0;
}


