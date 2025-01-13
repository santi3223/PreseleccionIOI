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
ll MOD = 998244353;

vector<vl> conexiones;
vb perm;
unordered_map<ll, ll> loc;

void dfs(ll cur){
	if(loc[cur]){
		return;
	}
	perm[cur] = true;
	loc[cur]++;
	ff(i, 0, conexiones[cur].size()){
		dfs(conexiones[cur][i]);
	}
}

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		conexiones = vector<vl>(n);
		perm = vb(n, false);
		ll maxx = 0;
		ff(i, 0, m){
			ll a, b;
			cin >> a >> b;
			a--; b--;
			conexiones[a].pb(b);
			conexiones[b].pb(a);
		}
		ff(i, 0, n){
			if(perm[i]){
				continue;
			}
			loc.clear();
			dfs(i);
			maxx = max(maxx, (ll)loc.size());
		}
		cout << maxx << ed;
	}
	
	return 0;
	
}
