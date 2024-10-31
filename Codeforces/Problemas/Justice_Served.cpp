//Gracias Lin <3
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll n;
	cin >> n;
	vector<pair<pll, ll>> nums(n);
	ff(i, 0, n){
		ll a, b;
		cin >> a >> b;
		b += a;
		nums[i] = {{a, b}, i};
	}
	sort(all(nums));
	vl limits(n, -1), tot(n, 0);
	limits[0] = nums[0].fi.se;
	
	ff(i, 1, n){
		ll l = 0, r = n-1;
		while(l != r){
			ll mid = l + (r-l)/2;
			if(nums[i].fi.se > limits[mid]){
				r = mid;
			}
			else{
				l = mid+1;
			}
		}
		tot[nums[i].se] = l;
		limits[l] = nums[i].fi.se;
	}
	
	ff(i, 0, n){
		cout << tot[i] << " ";
	}
	return 0;
}
