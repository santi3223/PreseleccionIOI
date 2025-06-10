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
		ll n, k;
		cin >> n >> k;
		string a, b;
		cin >> a >> b;
		unordered_map<char, ll> mp;
		ff(i, 0, n){
			mp[a[i]]++;
		}
		ll c = mp.size();
		bool ok = true;
		ff(i, 0, n){
			mp[b[i]]--;
			if(mp[b[i]] == 0){
				c--;
			}
			if(mp[b[i]] < 0){
				ok = false;
			}
		}
		if(c != 0 || !ok){
			cout << "NO" << ed;
			continue;
		}
		if(n <= k){
			if(a == b){
				cout << "YES" << ed;
			}
			else{
				cout << "NO" << ed;
			}
			continue;
		}
		if((n-1)/2+k < n){
			//cout << (n-1)/2 << " " << k << " " << n << ed;
			cout << "YES" << ed;
			continue;
		}
		ll ra = n-k, rb = n-ra-1;
		string x = a.substr(ra, rb-ra+1), y = b.substr(ra, rb-ra+1);
		//cout << x << " " << y << ed;
		if(x != y){
			cout << "NO" << ed;
		}
		else{
			cout << "YES" << ed;
		}
		
	}
}
