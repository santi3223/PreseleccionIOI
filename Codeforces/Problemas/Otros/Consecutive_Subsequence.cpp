#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
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
ll MOD = 1e9+7;


int main(){
	ll n;
	cin >> n;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	map<ll, ll> dp;
	ll c = 0, l = 0;
	ff(i, 0, n){
		dp[arr[i]] = dp[arr[i]-1]+1;
		if(c < dp[arr[i]]){
			c = dp[arr[i]];
			l = arr[i];
		}
	}
	vl ans;
	for(ll i = n-1; i >= 0; i--){
		if(arr[i] == l){
			ans.pb(i);
			l--;
		}
	}
	reverse(all(ans));
	cout << ans.size() << ed;
	ff(i, 0, ans.size()){
		cout << ans[i]+1 << " ";
	}
	
	
	return 0;
}
