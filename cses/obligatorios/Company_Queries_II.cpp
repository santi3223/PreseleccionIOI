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
 
vector<vl> conexiones, ancestro;
vl prof;
 
void dfs(ll cur, ll par){
	ancestro[cur][0] = par;
	ff(i, 1, 20){
		if(ancestro[cur][i-1] != -1){
			ancestro[cur][i] = ancestro[ancestro[cur][i-1]][i-1];
		}
		else{
			ancestro[cur][i] = -1;
		}
	}
	for(ll child : conexiones[cur]){
		if(child != par){
			prof[child] = prof[cur]+1;
			dfs(child, cur);
		}
	}
}
 
ll lca(ll a, ll b){
	if(prof[a] < prof[b]){
		swap(a, b);
	}
	ll dif = prof[a] - prof[b];
	ff(i, 0, 20){
		if(dif & (1 << i)){
			a = ancestro[a][i];
		}
	}
	if(a == b){
		return a;
	}
	for(ll i = 19; i >= 0; i--){
		if(ancestro[a][i] != ancestro[b][i]){
			a = ancestro[a][i];
			b = ancestro[b][i];
		}
	}
	return ancestro[a][0];
}
 
int main(){
	IO
	ll n, q;
	cin >> n >> q;
	conexiones = vector<vl>(n);
	ancestro = vector<vl>(n, vl(20, -1));
	prof = vl(n, 0);
	ff(i, 1, n){
		ll x;
		cin >> x;
		x--;
		conexiones[x].pb(i);
		conexiones[i].pb(x);
	}
	dfs(0, -1);
	while(q--){
		ll a, b;
		cin >> a >> b;
		a--;
		b--;
		cout << lca(a, b)+1 << ed;
	}
	
	return 0;
}
