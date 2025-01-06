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
	ll h, w, k;
	cin >> h >> w >> k;
	vector<pair<ll, pll>> arr(k);
	ff(i, 0, k){
		ll a, b, c;
		cin >> a >> b >> c;
		arr[i] = {a, {b, c}};
	}
	reverse(all(arr));
	unordered_map<ll, ll> one, two, nums;
	ff(i, 0, k){
		ll t = arr[i].fi, a = arr[i].se.fi, x = arr[i].se.se;
		if(t == 1){
			if(one[a] != 1){
				one[a] = 1;
				nums[x] += w-two.size();
			}
		}
		else{
			if(two[a] != 1){
				two[a] = 1;
				nums[x] += h-one.size();
			}
		}
	}
	nums[0] += (h*w)-((one.size()*w)+(two.size()*(h-one.size())));
	vector<pll> order;
	for(auto &p : nums){
		if(p.se > 0){
			order.pb({p.fi, p.se});
		}
	}
	sort(all(order));
	cout << order.size() << ed; //me olvide de estooo
	ff(i, 0, order.size()){
		cout << order[i].fi << " " << order[i].se << ed;
	}
	
	return 0;
	
}
