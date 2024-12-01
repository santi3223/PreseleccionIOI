#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll k;
		cin >> k;
		vl arr(k);
		map<ll, ll> mp;
		ff(i, 0, k){
			ll x;
			cin >> x;
			mp[x]++;
		}
		k -= 2;
		for(ll i = 1; i*i <= k; i++){
			if(k % i == 0){
				ll row = i;
				ll col = k/i;
				if(row == col){
					if(mp[row] > 1){
						cout << row << " " << col << ed;;
						break;
					}
				}
				else if(row != col){
					if(mp[row] > 0 && mp[col] > 0){
						cout << row << " " << col << ed;
						break;
					}
				}
			}
		}
	}
	return 0;
}
