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

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		
		vl x(n), y(n);
		ff(i, 0, n){
			cin >> x[i] >> y[i];
		}
		sort(all(x));
		sort(all(y));
		ll a = x[n/2]-x[(n-1)/2]+1;
		ll b = y[n/2]-y[(n-1)/2]+1;
		cout << a*b << ed;
	}
}
