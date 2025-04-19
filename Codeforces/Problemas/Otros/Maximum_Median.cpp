#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second

int main(){
	ll n, k;
	cin >> n >> k;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	sort(all(arr));
	ll l = 1, r = 1e10, ans = 0;
	while(l <= r){
		ll mid = l+(r-l)/2;
		ll cur = 0;
		ff(i, n/2, n){
			cur += max(0LL, mid-arr[i]);
		}
		if(cur > k){
			r = mid-1;
		}
		else{
			ans = mid;
			l = mid+1;
		}
	}
	cout << ans;
	
	return 0;
}
