#include <bits/stdc++.h>
//#include "doll.h"
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

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		vl arr(k);
		ff(i, 0, k){
			cin >> arr[i];
		}
		sort(rall(arr));
		ll i = 0;
		ll sum = 0;
		while(i < k && sum+n-arr[i] < n){
			sum += n-arr[i];
			i++;
		}
		cout << i << ed;
	}
}
