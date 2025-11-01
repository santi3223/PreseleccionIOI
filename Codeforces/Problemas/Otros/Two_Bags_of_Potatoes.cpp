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
	ll y, k, n;
	cin >> y >> k >> n;
	vl arr;
	ll cur = y/k;
	if(cur*k != y) cur++;
	cur *= k;
	for(ll i = cur; i <= n; i += k){
		if(i-y <= 0) continue;
		arr.pb(i-y);
	}
	if(arr.size() == 0) cout << -1;
	else{
		ff(i, 0, arr.size()){
			cout << arr[i] << " ";
		}
	}
}
 
