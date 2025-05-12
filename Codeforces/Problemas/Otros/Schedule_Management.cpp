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

vl c;
ll n;

bool check(ll x){
	ll f = 0, nec = 0;
	ff(i, 0, n){
		if(x >= c[i]){
			f += (x - c[i])/2;
		}
		else{
			nec += c[i]-x;
		}
	}
	return nec <= f;
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll m;
		cin >> n >> m;
		vl arr(m);
		c = vl(n);
		ff(i, 0, m){
			cin >> arr[i];
			arr[i]--;
			c[arr[i]]++;
		}
		ll l = 0, r = 2*m;
		ll ans = -1;
		while(l <= r){
			ll mid = (l+r)/2;
			if(check(mid)){
				ans = mid;
				r = mid-1;
			}
			else{
				l = mid+1;
			}
		}
		cout << ans << ed;
		
	}
	
	return 0;
}

