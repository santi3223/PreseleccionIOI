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
	vl x(1001, 1001);
	x[1] = 0;
	ff(i, 1, 1001){
		ff(j, 1, i+1){
			ll k = i+i/j;
			if(k < 1001){
				x[k] = min(x[k], x[i]+1);
			}
		}
	}
	ll t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		vl arr(n), brr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ff(i, 0, n){
			cin >> brr[i];
		}
		ll c = 0;
		ff(i, 0, n){
			c += x[arr[i]];
		}
		k = min(k, c);
		vl dp(k+5, 0);
		ff(i, 0, n){
			for(ll j = k-x[arr[i]]; j >= 0; j--){
				dp[j+x[arr[i]]] = max(dp[j+x[arr[i]]], dp[j]+brr[i]);
			}
		}
		ll maxx = 0;
		ff(i, 0, k+5){
			maxx = max(maxx, dp[i]);
		}
		cout << maxx << ed;
	}
	
	
}
