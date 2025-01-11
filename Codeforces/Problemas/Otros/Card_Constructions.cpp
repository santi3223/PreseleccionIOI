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

vl nums;

void calc(){
	ll c = 0;
	ll x = 2;
	ll e = 1;
	ll cur = 0;
	while(cur <= 1e9){
		nums.pb(cur + c + (x*e));
		cur += c + (x*e);
		c++;
		e++;
	}
}


int main(){
	IO
	calc();
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll c = 0;
		ll cur = n;
		while(true){
			ll pos = lower_bound(all(nums), cur) - nums.begin();
			if(nums[pos] > cur){
				pos--;
			}
			if(pos == -1){
				break;
			}
			c++;
			cur -= nums[pos];
		}
		cout << c << ed;
	}
	
	return 0;
	
}
