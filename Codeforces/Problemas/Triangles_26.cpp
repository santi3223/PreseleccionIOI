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

ll calc(vl &sub){
	ll c = 0;
	ll n = sub.size();
	ff(i, 0, n-2){
		ll x = sub[i], y = sub[i+1], z = sub[i+2];
		if(x+y > z && x+z > y && y+z > x){
			c = max(c, x+y+z);
		}
	}
	return c;
}

int main(){
	IO
	ll n, q;
	cin >> n >> q;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	while(q--){
		ll o;
		cin >> o;
		if(o == 0){
			ll p, v;
			cin >> p >> v;
			arr[p] = v;
		}
		else{
			ll l, r;
			cin >> l >> r;
			vl sub(arr.begin()+l, arr.begin()+r+1);
			sort(all(sub));
			cout << calc(sub) << ed;
		}
	}
	return 0;
}
