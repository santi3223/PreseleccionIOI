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
ll MOD = 998244353;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		unordered_map<ll, ll> mp;
		ff(i, 0, n){
			ll x;
			cin >> x;
			mp[x]++;
		}
		vl freq;
		for(auto &p : mp){
			freq.pb(p.se);
		}
		sort(rall(freq));
		ll alice = 0, ok = true, i = 0;
		bool vis = false, con = false;
		while(i < freq.size()){
			if(ok){
				alice++;
				if(freq[i] == 1){
					alice++;
					i++;
				}
				else if(freq[i] >= 2){
					if(vis){
						i++;
						vis = false;
					}
					else{
						con = true;
					}
				}
			}
			else{
				if(freq[i] == 1){
					i++;
				}
				else if(freq[i] >= 2){
					if(con){
						i++;
						con = false;
					}
					else{
						vis = true;
					}
				}
			}
			ok = !ok;
		}
		cout << alice << ed;
	}
	
	return 0;
}
