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
		ll n;
		cin >> n;
		if(n % 11 == 0){
			cout << "YES" << ed;
			continue;
		}
		ll x = 111*(n%11);
		n -= x;
		if(n < 0){
			cout << "NO" << ed;
			continue;
		}
		cout << "YES" << ed;
	}
	
	return 0;
}
