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
	ll t;
	cin >> t;
	while(t--){
	    ll n, x, m;
	    cin >> n >> x >> m;
	    ll l = x, r = x;
	    ff(i, 0, m){
	        ll L, R;
	        cin >> L >> R;
	        if(max(l, L) <= min(r, R)){
	            l = min(l, L);
	            r = max(r, R);
	        }
	    }
	    cout << r-l+1 << ed;
	}
	
	
	return 0;
}
