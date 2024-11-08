#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
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
 
ll minn = LLONG_MAX, centro = -1, tot = 0;
vector<vl> conexiones;
vl val, sums;
 
void dfs(ll cur, ll parent){
	ll maxx = 0;
	ll cursub = val[cur];
	for(auto &adj : conexiones[cur]){
		if(adj == parent){
			continue;
		}
		dfs(adj, cur);
		maxx = max(maxx, sums[adj]);
		cursub += sums[adj];
	}
	maxx = max(maxx, tot-cursub);
	if(maxx < minn){
		minn = maxx;
		centro = cur;
	}
	sums[cur] = cursub;
}
 
int LocateCentre(int n, int P[], int S[], int D[]){
	conexiones = vector<vl>(n);
	val = vl(n);
	sums = vl(n);
	tot = 0;
	ff(i, 0, n){
		tot += P[i];
		val[i] = P[i];
		if(i < n-1){
			conexiones[S[i]].pb(D[i]);
			conexiones[D[i]].pb(S[i]);
		}
	}
	dfs(0, 0);
	
	return centro;
}
 
//usaco salva vidas
