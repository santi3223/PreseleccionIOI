#include <bits/stdc++.h>
//#include "sphinx.h"
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back
#define pll pair<ll, ll>
#define fi first
#define se second

int main() {
	ll t;
	cin >> t;
	while(t--){
		ll n, x;
		cin >> n >> x;
		ll c = 0, sum = 0;
		ff(i, 0, n){
			ll val;
			cin >> val;
			if(val == x){
				c++;
			}
			sum += val;
		}
		if(c == n){
			cout << 0 << ed;
		}
		else if(c > 0 || sum == n*x){
			cout << 1 << ed;
		}
		else{
			cout << 2 << ed;
		}
		
	}
}
