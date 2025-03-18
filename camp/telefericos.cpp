#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(a, b, c) for(ll a = b; a < c; a++)
#define IO ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define fi first
#define se second
#define pll pair<ll, ll>
#define ed "\n"
#define vb vector<bool>
vb visited;
vector<vl> conexiones;
void dfs(ll cur){
	if(visited[cur]){
		return;
	}
	visited[cur] = true;
	for(ll x : conexiones[cur]){
		dfs(x);
	}
}


int main(){
	IO
	ll n, m;
	cin >> n >> m;
	conexiones = vector<vl>(n+5);
	visited= vb(n+5);
	ll existe = -1;
	ff(i, 0, m){
		ll a, b;
		cin >> a >> b;
		existe = a;
		conexiones[a].pb(b);
		conexiones[b].pb(a);
	}
	dfs(existe);
	ll c = 0;
	ff(i, 0, n+1){
		if(!visited[i]){
			conexiones[i].pb(existe);
			conexiones[existe].pb(i);
			dfs(i);
			c++;
		}
	}
	cout << c-1;
	
}

