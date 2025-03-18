#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define IO ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define fi first
#define se second
#define pll pair<ll, ll>
#define ed "\n"
#define vb vector<bool>
#define ff(aa, bb, cc) for(ll aa = (ll)bb; aa < (ll)cc; aa++)

unordered_map<ll, set<ll>> mp;
map<pll, bool> activated;
vb visited;
vector<pll> casos;
vl idx;
vector<vl> conexiones;
void setsss(){
	set<ll> setsi;
	for(ll coso : idx){
		for(auto p : mp[coso]){
			setsi.insert(p);
		}
	}
	for(ll coso : idx){
		mp[coso].clear();
		mp[coso] = setsi;
	}
}

void dfs(ll cur){
	if(visited[cur]){
		return;
	}
	idx.pb(cur);
	visited[cur] = true;
	for(ll p : conexiones[cur]){
		if(activated[{cur, p}] || activated[{p, cur}]){
			dfs(p);
		}
	}
}

void ya(ll x){
	ll a = casos[x].fi, b = casos[x].se;
	if(activated[{a,b}]){
		activated[{a,b}] = false;
	}
	else{
		idx.clear();
		activated[{a, b}] = true;
		conexiones[a].pb(b);
		conexiones[b].pb(a);
		dfs(a);
	}
}

int main(){
	IO
	ll n, m, q;
	cin >> n >> m >> q;
	ff(i, 0, n-1){
		ll a, b;
		cin >> a >> b;
		casos.pb({a, b});
		conexiones[a].pb(b);
		conexiones[b].pb(a);
	}
	conexiones = vector<vl>(n+5);
	visited = vb(n+5, false);
	while(m--){
		ll ord;
		cin >> ord;
		ord--;
		ya(ord);
	}
	
	while(q--){
		ll x;
		cin >> x;
		cout << mp[x].size() << ed;
	}
	
	return 0;
}
	

