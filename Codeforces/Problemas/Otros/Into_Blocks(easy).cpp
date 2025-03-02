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
	ll n, q;
	cin >> n >> q;
	unordered_map<ll, ll> mp;
	unordered_map<ll, ll> last;
	unordered_map<ll, ll> dur;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
		last[arr[i]] = i;
		dur[arr[i]]++;
	}
	ll curmax = 0, c = 0, sz = 0;;
	set<ll> nums;
	ff(i, 0, n){
		nums.insert(arr[i]);
		sz++;
		if(last[arr[i]] > curmax){
			curmax = last[arr[i]];
		}
		if(i == curmax){
			ll maxx = 0;
			for(ll p : nums){
				maxx = max(maxx, dur[p]);
			}
			c += (sz-maxx);
			nums.clear();
			curmax = 0;
			sz = 0;
		}
	}
	cout << c;
	
	return 0;
}
