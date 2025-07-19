#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

ll n, k;
vl arr;

bool ok(ll x, ll cur){
	ll c = 0;
	ff(i, 0, n){
		if(cur == 0){
			c++;
			cur ^= 1;
		}
		else{
			if(arr[i] <= x){
				c++;
				cur ^= 1;
			}
		}
	}
	return c >= k;
}

int main(){
	cin >> n >> k;
	arr = vl(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	ll l = 0, r = 1e9-1;
	while(l < r){
		ll mid = (l+r)/2;
		if(ok(mid, 0) || ok(mid, 1)){
			r = mid;
		}
		else{
			l = mid+1;
		}
	}
	cout << l;
	
}
