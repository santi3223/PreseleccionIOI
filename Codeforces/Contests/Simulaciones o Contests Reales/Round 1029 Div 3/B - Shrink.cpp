#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll maxx = 0;
		for(ll i = 1; i <= n; i+= 2){
			cout << i << " ";
			maxx = max(maxx, i);
		}
		ll id = n;
		if(maxx == n){
			id = n-1;
		}
		for(ll i = id; i >= 1; i -= 2){
			cout << i << " ";
		}
		cout << ed;
	}
}
