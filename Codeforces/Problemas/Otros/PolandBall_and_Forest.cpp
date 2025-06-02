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

vb visited;
vector<vl> conexiones;

void dfs(ll cur){
	if(visited[cur]){
		return;
	}
	visited[cur] = true;
	for(auto &x : conexiones[cur]){
		dfs(x);
	}
}

int main(){
	ll n;
	cin >> n;
	conexiones = vector<vl>(n);
	visited = vb(n, false);
	ff(i, 0, n){
		ll x;
		cin >> x;
		x--;
		conexiones[i].pb(x);
		conexiones[x].pb(i);
	}
	ll c = 0;
	ff(i, 0, n){
		if(!visited[i]){
			c++;
			dfs(i);
		}
	}
	cout << c;
}
