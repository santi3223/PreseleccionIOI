#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back
#define pll pair<ll, ll>
#define fi first
#define se second

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, s, x;
		cin >> n >> s >> x;
		map<ll, ll> prefix;
		prefix[-1] = 0;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ff(i, 0, n){
			prefix[i] = prefix[i-1]+arr[i];
		}
		map<ll, ll> mp;
		ll l = 0;
		ll tot = 0;
		ff(r, 0, n){
			if(arr[r] > x){
				mp.clear();
				l = r+1;
				continue;
			}
			if(arr[r] == x){
				while(l <= r){
					mp[prefix[l-1]]++;
					l++;
				}
			}
			tot += mp[prefix[r]-s];
		}
		cout << tot << ed;
		
	}

  return 0;
}
