//Super las explicaciones de Lin, q haría sin él
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	IO
	ll n;
	cin >> n;
	vector<pair<pll, ll>> nums(n);
	ff(i, 0, n){
		ll a, b;
		cin >> a >> b;
		b += a;
		b *= -1;
		nums[i] = {{a, b}, i};
	}
	sort(all(nums));
	vl limits(n, -1), tot(n, 0); // max de cada pos // respuesta
	limits[0] = -nums[0].fi.se;
	
	ff(i, 1, n){
		ll l = 0, r = n-1;
		while(l < r){
			ll mid = l + (r - l) / 2;
			if(-nums[i].fi.se <= limits[mid]){
				l = mid + 1;
			} else {
				r = mid;
			}
		}
		
		tot[nums[i].se] = l; //valor en la pos i
		limits[l] = -nums[i].fi.se; //base para verificar <= en el sig paso
	}
	
	ff(i, 0, n){
		cout << tot[i] << " ";
	}
	return 0;
}
