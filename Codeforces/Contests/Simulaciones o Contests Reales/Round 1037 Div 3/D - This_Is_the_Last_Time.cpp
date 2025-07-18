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
		ll n, k;
		cin >> n >> k;
		vector<pair<pll, ll>> arr;
		ff(i, 0, n){
			ll a, b, c;
			cin >> a >> b >> c;
			arr.pb({{a, b}, c});
		}
		sort(all(arr));
		vb visited(n, false);
		ll maxx = k;
		set<ll> st;
		queue<ll> q;
		q.push(k);
		st.insert(k);
		ll i = 0;
		multimap<ll, ll> mp;
		while(!q.empty()){
			ll coins = q.front();
			q.pop();
			maxx = max(maxx, coins);
			while(i < n && arr[i].fi.fi <= coins){
				if(arr[i].fi.se >= coins){
					mp.insert({arr[i].fi.se, i});
				}
				i++;
			}
			vector<multimap<ll, ll>::iterator> borrar;
			for(auto p = mp.begin(); p != mp.end(); p++){
				ll id = p->se;
				if(visited[id]){
					continue;
				}
				ll l = arr[id].fi.fi, r = arr[id].fi.se, real = arr[id].se;
				if(l <= coins && coins <= r && real != coins){
					visited[id] = true;
					if(st.insert(real).se){
						q.push(real);
					}
					borrar.pb(p);
				}
			}
			for(auto p : borrar){
				mp.erase(p);
			}
		}
		cout << maxx << ed;
	}
	
}
