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
vb visited;

void dfs(ll cur){
	if(visited[cur]){
		return;
	}
	visited[cur] = true;
	ff(i, 0, conexiones[cur].size()){
		dfs(conexiones[cur][i]);
	}
}

int main(){
	IO
	ll n, m;
	cin >> n >> m;
	vector<vl> idiomas(n);
	vector<vl> comun(m+1);
	conexiones = vector<vl>(n);
	visited = vb(n, false);
	bool noo = true;
	ff(i, 0, n){
		ll k;
		cin >> k;
		if(k != 0){
			noo = false;
		}
		ff(j, 0, k){
			ll x;
			cin >> x;
			idiomas[i].pb(x);
			comun[x].pb(i);
		}
	}
	if(noo){
		cout << n;
		return 0;
	}
	ll c = 0;
	ff(i, 0, m+1){
		ff(j, 1, comun[i].size()){
			ll a = comun[i][0], b = comun[i][j];
			conexiones[a].pb(b);
			conexiones[b].pb(a);
		}
	}
	ff(i, 0, n){
		if(!visited[i]){
			c++;
			dfs(i);
		}
	}
	cout << c-1;
	
	return 0;
}
