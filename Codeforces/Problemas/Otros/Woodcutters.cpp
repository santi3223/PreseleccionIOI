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
	vector<pll> arr(n);
	ff(i, 0, n){
		ll x, h;
		cin >> x >> h;
		arr[i] = {x, h};
	}
	if(n == 1){
		cout << 1 << ed;
		return 0;
	}
	ll c = 2, last = arr[0].fi;
	ff(i, 1, n-1){
		ll x = arr[i].fi;
		ll h = arr[i].se;
		if(x-h > last){
			c++;
			last = x;
		}
		else if(x+h < arr[i+1].fi){
			c++;
			last = x+h;
		}
		else{
			last = x;
		}
	}
	cout << c << ed;
	
	return 0;
}
