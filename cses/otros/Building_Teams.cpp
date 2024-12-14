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
vb color;
vb visited;
bool ok = true;
void dfs(ll cur, ll parent, bool c){
	if(visited[cur]){
		if(color[cur] == c){
			return;
		}
		else{
			ok = false;
			return;
		}
	}
	visited[cur] = true;
	color[cur] = c;
	ff(i, 0, conexiones[cur].size()){
		if(conexiones[cur][i] != parent){
			bool q = !c;
			dfs(conexiones[cur][i], cur, q);
		}
	}
}
 
int main(){
	IO
	ll n, m;
	cin >> n >> m;
	color = vb(n, false);
	visited = vb(n, false);
	conexiones = vector<vl>(n);
	while(m--){
		ll a, b;
		cin >> a >> b;
		a--;
		b--;
		conexiones[a].pb(b);
		conexiones[b].pb(a);
	}
	ff(i, 0, n){
		if(!visited[i]){
			dfs(i, -1, false);
		}
	}
	if(ok){
		ff(i, 0, n){
			if(color[i] == false){
				cout << "1 ";
			}
			else{
				cout << "2 ";
			}
		}
	}
	else{
		cout << "IMPOSSIBLE";
	}
	
	return 0;
}
