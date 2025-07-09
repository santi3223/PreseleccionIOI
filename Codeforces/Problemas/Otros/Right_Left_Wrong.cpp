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
ll MOD = 1e9+7;


int main() {
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n+1, 0);
		ff(i, 1, n+1){
			ll x;
			cin >> x;
			arr[i] = arr[i-1]+x;
		}
		string str;
		cin >> str;
		ll c = 0;
		ll l = 0, r = n-1;
		while(l < r){
			while(l < n && str[l] == 'R'){
				l++;
			}
			while(r >= 0 && str[r] == 'L'){
				r--;
			}
			if(l < r){
				c += arr[r+1]-arr[l];
				l++;
				r--;
			}
		}
		cout << c << ed;
	}
}
