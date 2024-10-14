#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ull unsigned long long
#define pll pair<ll, ll>
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
	while(t--){
		ll n, r;
		cin >> n >> r;
		vl familias;
		ll q = 0;
		ff(i, 0, n){
			ll x;
			cin >> x;
			if(x%2 == 0){
				q += x;
			}
			else{
				familias.pb(1);
				if(x != 1){
					x--;
					q += x;
				}
			}
		}
		ll solos = familias.size();
		r -= (q/2);
		if(solos % 2 == 1){
			q++;
			solos--;
			r--;
		}
		while(solos > r && r-1 >= 0 && solos-2 >= 0){
			solos -= 2;
			r--;
		}
		if(r > 0){
			q += min(r, solos);
		}
		cout << q << ed;
		
		
		
	}
	return 0;
}
