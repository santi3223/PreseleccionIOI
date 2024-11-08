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

ll n, q;
vb visited;
vector<vl> conexiones;
bool ok;

void Init(int N_){
	n = N_;
	conexiones = vector<vl>(n);
}

void Link(int a, int b){
	conexiones[a].pb(b);
	conexiones[b].pb(a);
}

void dfs(ll cur, ll ban){
	if(visited[cur]){
		return;
	}
	visited[cur] = true;
	ll c = 0;
	
	for(auto &x : conexiones[cur]){
		if(x != ban){
			c++;
		}
	}
	if(c > 2){
		ok = false;
		return;
	}
	if(c == 0){
		q = 2;
	}
	else if(c == 1){
		q++;
	}
	
	for(auto &x : conexiones[cur]){
		if(x != ban){
			dfs(x, ban);
		}
	}
}

int CountCritical(){
	ll c = 0;
	ff(i, 0, n){
		visited = vb(n, false);
		ok = true;
		ff(j, 0, n){
			if(!visited[j] && i != j){
				q = 0;
				dfs(j, i);
				if(q != 2){
					ok = false;
					break;
				}
			}
		}
		
		if(ok){
			c++;
		}
	}
	
	return c;
}

//fuerza bruta pa el sub 1, sale?
