#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
#define pb push_back

vector<vl> conexiones;
vl dist, lig, con, sz;

void dfs(ll cur, ll p){
	sz[cur] = 1;
	lig[cur] = 0;
	con[cur] = 0;
	if(dist[cur] == 1){
		con[cur] = 1;
	}
	for(auto &x : conexiones[cur]){
		if(x == p){
			continue;
		}
		dfs(x, cur);
		sz[cur] += sz[x];
		con[cur] += con[x];
		if(sz[x] > 1){
			lig[cur] += con[x];
		}
	}
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		conexiones = vector<vl>(n);
		dist = vl(n, 0);
		bool ok = false;
		ff(i, 0, n-1){
			ll a, b;
			cin >> a >> b;
			a--;
			b--;
			conexiones[a].pb(b);
			conexiones[b].pb(a);
			dist[a]++;
			dist[b]++;
			if(dist[a] == n-1 || dist[b] == n-1){
				ok = true;
			}
		}
		if(ok){
			cout << 0 << ed;
			continue;
		}
		sz = vl(n);
		con = vl(n);
		lig = vl(n, 0);
		dfs(0, -1);
		ll minn = -1;
		ff(i, 0, n){
			ll cur = lig[i];
			if(i != 0){
				ll p = n-sz[i];
				if(p != 1){
					cur += (con[0]-con[i]);
				}
			}
			if(minn == -1 || cur < minn){
				minn = cur;
			}
		}
		cout << minn << ed;
	}
}
