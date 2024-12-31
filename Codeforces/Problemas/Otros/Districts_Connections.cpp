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

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		vector<pll> conexiones;
		ll last = -1;
		ff(i, 0, n){
			cin >> arr[i];
		}
		ff(i, 1, n){
			if(arr[i] != arr[0]){
				conexiones.pb({0, i});
				last = i;
			}
		}
		if(last == -1){
			cout << "NO" << ed;
			continue;
		}
		ff(i, 1, n){
			if(arr[i] == arr[0]){
				conexiones.pb({last, i});
			}
		}
		cout << "YES" << ed;
		ff(i, 0, conexiones.size()){
			cout << conexiones[i].fi+1 << " " << conexiones[i].se+1 << ed;
		}
		
	}
	
	return 0;
}
