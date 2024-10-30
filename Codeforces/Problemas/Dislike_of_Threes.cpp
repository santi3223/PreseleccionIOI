#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ull __int128
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	IO
	ll t;
	cin >> t;
	vl x;
	ff(i, 1, 1667){
		if(i%3 != 0 && i % 10 != 3){
			x.pb(i);
		}
	}
	while(t--){
		ll k;
		cin >> k;
		k--;
		cout << x[k] << ed;
	}
	
	return 0;
}
