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

vl u, v, w, inMST, parent, rankk, prof;
vector<vl> up, maxx;
vector<vector<pll>> adj;
ll mstw = 0, n, m;

ll find(ll x){
	if(parent[x] == x){
		return x;
	}
	else{
		parent[x] = find(parent[x]);
		return parent[x];
	}
}

bool unite(ll x, ll y){
	ll rootx = find(x);
	ll rooty = find(y);
	if(rootx == rooty){
		return false;
	}
	if(rankk[rootx] > rankk[rooty]){
		parent[rooty] = rootx;
	}
	else if(rankk[rootx] < rankk[rooty]){
		parent[rootx] = rooty;
	}
	else{
		parent[rooty] = rootx;
		rankk[rootx]++;
	}
	return true;
}

void kruskal(){
	vl order(m);
	ff(i, 0, m){
		order[i] = i;
	}
	sort(all(order),[](ll a, ll b){return w[a] < w[b];}); //sort segun w

	ff(i, 1, n+1){
		parent[i] = i;
		rankk[i] = 0;
	}
	for(int i : order){
		if(unite(u[i], v[i])){
			mstw += w[i];
			inMST[i] = 1;
			adj[u[i]].emplace_back(v[i], w[i]);
			adj[v[i]].emplace_back(u[i], w[i]);
		}
	}
}

void dfs(ll cur, ll par){
	ff(i, 1, 20){
		up[cur][i] = up[up[cur][i - 1]][i - 1];
		maxx[cur][i] = max(maxx[cur][i - 1], maxx[up[cur][i - 1]][i - 1]);
	}
	for(auto next : adj[cur]){
		ll vec = next.fi, weight = next.se;
		if(vec != par){
			up[vec][0] = cur;
			maxx[vec][0] = weight;
			prof[vec] = prof[cur]+1;
			dfs(vec, cur);
		}
	}
}

ll getmaxx(ll x, ll y){
	if(prof[x] < prof[y]){
		swap(x, y);
	}
	ll maxw = 0;
	for(ll i = 19; i >= 0; i--){
		if(prof[x] - (1 << i) >= prof[y]){
			maxw = max(maxw, maxx[x][i]);
			x = up[x][i];
		}
	}
	if(x == y){
		return maxw;
	}
	for(ll i = 19; i >= 0; i--){
		if(up[x][i] != up[y][i]){
			maxw = max({maxw, maxx[x][i], maxx[y][i]});
			x = up[x][i];
			y = up[y][i];
		}
	}
	return max({maxw, maxx[x][0], maxx[y][0]});
}

int main(){
	IO
	cin >> n >> m;
	
	u = vl(m);
	v = vl(m);
	w = vl(m);
	inMST = vl(m, 0);
	parent = vl(n+1);
	rankk = vl(n+1, 0);
	adj = vector<vector<pll>>(n+1);
	up = vector<vl>(n+1, vl(20, 0));
	maxx = vector<vl>(n+1, vl(20, 0));
	prof = vl(n+1, 0);
	
	ff(i, 0, m){
		cin >> u[i] >> v[i] >> w[i];
	}
	kruskal();
	dfs(1, -1);
	
	vl res(m, mstw);
	ff(i, 0, m){
		if(inMST[i] == 0){
			ll maxw = getmaxx(u[i], v[i]);
			res[i] = mstw - maxw + w[i];
		}
	}
	
	ff(i, 0, m){
		cout << res[i] << ed;
	}
	
	return 0;
}
