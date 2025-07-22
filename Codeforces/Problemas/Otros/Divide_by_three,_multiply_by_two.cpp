#include <bits/stdc++.h>
//#include "paint.h"
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
ll MOD = 1e9+7;

ll cont(ll x){
	ll c = 0;
	while(x % 3 == 0){
		c++;
		x /= 3;
	}
	return c;
}

int main(){
	ll n;
	cin >> n;
	vector<pll> arr(n);
	ff(i, 0, n){
		cin >> arr[i].se;
		arr[i].fi = -cont(arr[i].se);
	}
	sort(all(arr));
	ff(i, 0, n){
		cout << arr[i].se << ed;
	}
}
