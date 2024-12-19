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

vl nums;
void make(){
	nums.pb(0);
	ll cur = 0, c = 0;
	while(c <= 2e9){
		cur++;
		c += cur;
		nums.pb(c);
	}
}

int main(){
	IO
	make();
	ll t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		k--;
		ll pos = upper_bound(all(nums), k) - nums.begin()+1;
		k++;
		ll x = n-pos, y = n-(k-nums[pos-2]);
		string str(n, 'a');
		str[x] = 'b';
		str[y] = 'b';
		cout << str << ed;
	}
	
	return 0;
}
