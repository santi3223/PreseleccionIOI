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
		if(n < 4){
			cout << -1 << ed;
			continue;
		}
		for(ll i = n; i >= 1; i--){
			if(i % 2 != 0){
				cout << i << " ";
			}
		}
		cout << "4 2 ";
		for(ll i = 6; i <= n; i += 2){
			cout << i << " ";
		}
		cout << ed;
	}
	
	return 0;
}
