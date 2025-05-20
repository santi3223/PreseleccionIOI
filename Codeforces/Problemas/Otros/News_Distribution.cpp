#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
ll MOD = 998224353;

vl color;
vector<vl> conexiones;
ll v = 0, n;

ll dfs(ll cur){
	if(color[cur]){
		return 0;
	}
	color[cur] = v;
	ll c = 0;
	if(cur < n){
		c++;
	}
	for(auto q : conexiones[cur]){
		c += dfs(q);
	}
	return c;
}

int main(){
	ll m;
	cin >> n >> m;
	color = vl(n+m+5, 0);
	conexiones = vector<vl>(n+m);
	vl s(n+m+5);
	ff(i, 0, m){
		ll k;
		cin >> k;
		ff(j, 0, k){
			ll q;
			cin >> q;
			q--;
			conexiones[q].pb(i+n);
			conexiones[i+n].pb(q);
		}
	}
	ff(i, 0, n){
		if(color[i] == 0){
			v++;
			s[v] = dfs(i);
		}
		cout << s[color[i]] << " ";
	}
	
	
	return 0;
}

