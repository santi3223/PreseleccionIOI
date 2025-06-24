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
		vl arr(n), pref(n+5), suf(n+5);
		
		ff(i, 0, n){
			cin >> arr[i];
			pref[i] = arr[i]+i;
			suf[i]= arr[i]-i;
		}
		ff(i, 1, n){
			pref[i] = max(pref[i], pref[i-1]);
		}
		for(ll i = n-2; i >= 0; i--){
			suf[i] = max(suf[i], suf[i+1]);
		}
		ll maxx = 0;
		ff(i, 1, n-1){
			maxx = max(maxx, pref[i-1]+arr[i]+suf[i+1]);
		}
		cout << maxx << ed;
	}
	
}
