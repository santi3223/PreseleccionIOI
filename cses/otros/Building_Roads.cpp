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
 
vector<vl> conexiones;
vb vis;
 
void dfs(ll cur){
	if(vis[cur]){
		return;
	}
	vis[cur] = true;
	ff(i, 0, conexiones[cur].size()){
		dfs(conexiones[cur][i]);
	}
}
 
int main(){
	IO
	ll n, m;
	cin >> n >> m;
	conexiones = vector<vl>(n);
	vis = vb(n);
	ff(i, 0, m){
		ll a, b;
		cin >> a >> b;
		a--; b--;
		conexiones[a].pb(b);
		conexiones[b].pb(a);
	}
	dfs(0);
	ll last = 1;
	vector<pll> ord;
	ff(i, 0, n){
		if(vis[i] == false){
			ord.pb({last, i+1});
			last = i+1;
			dfs(i);
		}
	}
	if(ord.size() == 0){
		cout << 0;
	}
	else{
		cout << ord.size() << ed;
		ff(i, 0, ord.size()){
			cout << ord[i].fi << " " << ord[i].se << ed;
		}
	}
	return 0;
}
