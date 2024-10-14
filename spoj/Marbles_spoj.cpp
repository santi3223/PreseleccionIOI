#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ull __int128
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
		ll n, k;
		cin >> n >> k;
		n--; k--;
		if(k == 0 || n == k){
			cout << 1 << ed;
			continue;
		}
		ll maxx = max(k, n-k);
		ll x = 1;
		ll j = 1;
		for(ll i = n; i > maxx; i--){
			x = x*i/j;
			j++; 
		}
		cout << x << ed;
	}
	
	return 0;
}
