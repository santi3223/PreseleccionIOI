#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back

vector<vl> conexiones;
vl par, dist;

void dfs(ll cur, ll p){
	par[cur] = p;
	for(auto &x : conexiones[cur]){
		if(x != p){
			dist[x] = dist[cur]+1;
			dfs(x, cur);
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
		par = vl(n);
		dist = vl(n);
		ff(i, 0, n-1){
			ll a, b;
			cin >> a >> b;
			a--;
			b--;
			conexiones[a].pb(b);
			conexiones[b].pb(a);
		}
		dist[0] = 0;
		dfs(0, -1);
		ll x = max_element(all(dist))-dist.begin();
		dist[x] = 0;
		dfs(x, -1);
		ll y = max_element(all(dist))-dist.begin();
		if(dist[y] == n-1){
			cout << -1 << ed;
			continue;
		}
		vector<bool> in(n, false);
		ll cur = y;
		while(y != -1){
			in[y] = true;
			y = par[y];
		}
		ll a = -1, b = -1, c = -1;
		ff(i, 0, n){
			if(!in[i]){
				continue;
			}
			for(auto &xx : conexiones[i]){
				if(!in[xx]){
					a = par[i];
					b = i;
					c = xx;
				}
			}
			if(a != -1){
				break;
			}
		}
		cout << a+1 << " " << b+1 << " " << c+1 << ed;
	}
}
