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

vector<vector<vector<pll>>> conexiones;
vector<vb> visited;
bool ok = true;
ll n, m;

void dfs(ll x, ll y){
	if(visited[x][y]){
		return;
	}
	if(x == 0 || x == n-1 || y == 0 || y == m-1){
		ok = false;
	}
	visited[x][y] = true;
	for(ll i = 0; i < conexiones[x][y].size(); i++){
		dfs(conexiones[x][y][i].fi, conexiones[x][y][i].se);
	}
}

int main(){
	IO
	cin >> n >> m;
	vector<vl> grid(n, vl(m));
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < m; j++){
			cin >> grid[i][j];
		}
	}
	conexiones = vector<vector<vector<pll>>>(n, vector<vector<pll>>(m));
	visited = vector(n, vb(m, false));
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < m; j++){
			if(grid[i][j] == 1){
				if(i-1 >= 0 && grid[i-1][j] == 1){
					conexiones[i-1][j].pb({i, j});
					conexiones[i][j].pb({i-1, j});
				}
				if(j >= 0 && grid[i][j-1] == 1){
					conexiones[i][j-1].pb({i, j});
					conexiones[i][j].pb({i, j-1});
				}
				if(i+1 < n && grid[i+1][j] == 1){
					conexiones[i+1][j].pb({i, j});
					conexiones[i][j].pb({i+1, j});
				}
				if(j+1 < m && grid[i][j+1] == 1){
					conexiones[i][j+1].pb({i, j});
					conexiones[i][j].pb({i, j+1});
				}
			}
			
		}
	}
	ll c = 0;
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < m; j++){
			if(grid[i][j] == 1 && !visited[i][j]){
				dfs(i, j);
				if(ok){
					c++;
				}
				ok = true;
			}
		}
	}
	cout << c;
}
//DIOS MIOO
