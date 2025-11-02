#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define vb vector<bool>
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll n;
	cin >> n;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	vl pref(n+1), suf(n+1);
	pref[0] = arr[0];
	suf[n-1] = arr[n-1];
	ff(i, 1, n){
		pref[i] = gcd(pref[i-1], arr[i]);
	}
	for(ll i = n-2; i >= 0; i--){
		suf[i] = gcd(suf[i+1], arr[i]);
	}
	ll c = 0;
	ff(i, 0, n){
		if(i == 0) c = suf[1];
		else if(i == n-1){
			c = c*pref[n-2]/gcd(pref[n-2], c);
		}
		else{
			c = c*gcd(pref[i-1], suf[i+1])/gcd(gcd(pref[i-1], suf[i+1]), c);
		}
	}
	cout << c;
	
}
