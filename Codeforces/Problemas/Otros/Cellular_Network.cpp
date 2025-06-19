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
	ll n, m;
	cin >> n >> m;
	vl arr(n), brr(m);
	ff(i, 0, n){
		cin >> arr[i];
	}
	ff(i, 0, m){
		cin >> brr[i];
	}
	ll c = 0;
	ff(i, 0, n){
		ll r = lower_bound(all(brr), arr[i])-brr.begin();
		ll l = r-1;
		ll minn = LLONG_MAX;
		if(r < m){
			minn = min(minn, brr[r]-arr[i]);
		}
		if(l >= 0){
			minn = min(minn, arr[i]-brr[l]);
		}
		c = max(c, minn);
	}
	cout << c;
}
