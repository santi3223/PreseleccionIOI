#include <bits/stdc++.h>
using namespace std;
#define ll int
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
	ll n, m;
	cin >> n >> m;
	ll maxx = 0;
	ff(i, 0, n+1){
		ll c = i;
		ll ln = n-i, lm = m-2*i;
		if(lm >= 0){
			c += min(lm, ln/2);
			maxx = max(maxx, c);
		}
	}
	cout << maxx;
}
