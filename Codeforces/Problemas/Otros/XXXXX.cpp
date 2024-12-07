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
		ll n, x;
		cin >> n >> x;
		ll l = -1, r = -1, summ = 0;
		ff(i, 0, n){
			ll a;
			cin >> a;
			if(a % x != 0){
				if(l == -1){
					l = i;
				}
				r = i;
			}
			summ += a;
		}
		if(summ % x != 0){
			cout << n;
		}
		else if(l == -1){
			cout << -1;
		}
		else{
			cout << n-min(l+1, n-r);
		}
		cout << ed;
	}
	
	return 0;
}
