#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
ll MOD = 1e9+7;

vb visited;
vector<vl> conexiones;

ll dfs(ll c){
	visited[c] = true;
	for(auto x : conexiones[c]){
		if(!visited[x]){
			return dfs(x)+1;
		}
	}
	return 1;
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		conexiones = vector<vl>(n);
		visited = vb(n, false);
		bool ok = true;
		ff(i, 0, n){
			ll a, b;
			cin >> a >> b;
			a--;
			b--;
			conexiones[a].pb(b);
			conexiones[b].pb(a);
			if(a == b || conexiones[a].size() > 2 || conexiones[b].size() > 2){
				ok = false;
			}
		}
		if(!ok){
			cout << "NO" << ed;
			continue;
		}
		ok = true;
		ff(i, 0, n){
			if(!visited[i]){
				if(dfs(i)%2 != 0){
					ok = false;
					break;
				}
			}
		}
		if(ok){
			cout << "YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
	}
	
}

