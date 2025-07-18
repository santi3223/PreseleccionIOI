#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll tt;
	cin >> tt;
	while(tt--){
		string t;
		cin >> t;
		ll n = t.size();
		ll minn = 10;
		ff(i, 0, n){
			ll c = t[i]-'0';
			minn = min(minn, c);
		}
		cout << minn << ed;
	}
	
}
