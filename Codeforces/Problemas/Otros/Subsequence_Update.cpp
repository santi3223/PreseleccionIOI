#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
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
		ll n, l, r;
		cin >> n >> l >> r;
		l--;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		vl brr = arr;
		sort(brr.begin()+l, brr.end());
		sort(arr.begin(), arr.begin()+r);
		reverse(arr.begin(), arr.begin()+r);
		int a = 0, b = 0;
		ff(i, l, r){
			a += arr[i];
			b += brr[i];
		}
		cout << min(a, b) << ed;
	}
}
