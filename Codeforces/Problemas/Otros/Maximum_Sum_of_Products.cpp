#include <bits/stdc++.h>
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

int main(){
	ll n;
	cin >> n;
	vl arr(n), brr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	ff(i, 0, n){
		cin >> brr[i];
	}
	vl pref(n+1);
	pref[0] = 0;
	ff(i, 1, n+1){
		pref[i] = pref[i-1]+arr[i-1]*brr[i-1];
	}
	ll maxx = pref[n];
	ff(x, 0, n){
		//cout << "XXX " << x << ed;
		ll cur = arr[x]*arr[x];
		for(ll l = x-1, r = x+1; l >= 0 && r < n; l--, r++){
			cur += arr[l]*brr[r];
			cur += arr[r]*brr[l];
			maxx = max(maxx, cur+pref[l]+(pref[n]-pref[r+1]));
		}
		//cout << "CENTER " << maxx << ed;
		cur = 0;
		for(ll l = x, r = x+1; l >= 0 && r < n; l--, r++){
			cur += arr[l]*brr[r];
			cur += arr[r]*brr[l];
			maxx = max(maxx, cur+pref[l]+(pref[n]-pref[r+1]));
		}
		//cout << "NOT " << maxx << ed;
	}
	cout << maxx;
}
