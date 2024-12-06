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
		ll par = 0, imp = 0;;
		ff(i, 0, n){
			ll x;
			cin >> x;
			if(i % 2 == 0){
				par += x;
			}
			else{
				imp += x;
			}
		}
		ll ti = n/2, tp = n-ti;
		if(par % tp == 0 && imp % ti == 0 && par/tp == imp/ti){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << ed;
	}
	return 0;
}
