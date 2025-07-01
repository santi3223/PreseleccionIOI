#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 998244353;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll c = 0;
		ff(k, 1, n+1){
			if(n % k == 0){
				ll g = 0;
				for(ll i = 0; i+k < n; i++){
					g = gcd(g, abs(arr[i+k]-arr[i]));
				}
				if(g != 1){
					c++;
				}
			}
		}
		cout << c << ed;
	}
}
