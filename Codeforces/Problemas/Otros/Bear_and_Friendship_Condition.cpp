#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

ll a = 0, b = 0;
vb visited;
vector<vl> conexiones;

void dfs(ll cur){
	if(visited[cur]){
		return;
	}
	visited[cur] = true;
	a++;
	b += conexiones[cur].size();
	for(auto &x : conexiones[cur]){
		dfs(x);
	}
}

int main(){
	ll n, m;
	cin >> n >> m;
	conexiones = vector<vl>(n);
	visited = vb(n, false);
	while(m--){
		ll x, y;
		cin >> x >> y;
		x--;
		y--;
		conexiones[x].pb(y);
		conexiones[y].pb(x);
	}
	ff(i, 0, n){
		if(!visited[i]){
			a = 0;
			b = 0;
			dfs(i);
			if(b != a*(a-1)){
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}
