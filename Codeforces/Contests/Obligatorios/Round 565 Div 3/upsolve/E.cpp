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
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;
ll MAXX = 1e7;

ll n, m;
vl d;
vector<vl> graph;

void bfs(ll s){
	queue<ll> q;
	q.push(s);
	d = vl(n, MAXX); // diferente a un resize, ahora lo reinicia
	d[s] = 0;
	while(!q.empty()){
		ll f = q.front();
		q.pop();
		for(auto x : graph[f]){
			if(d[x] == MAXX){
				d[x] = d[f]+1;
				q.push(x);
			}
		}
	}
}

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		graph = vector<vl>(n); //tambien aca
		ff(i, 0, m){
			ll a, b;
			cin >> a >> b;
			a--;
			b--;
			graph[a].pb(b);
			graph[b].pb(a);
		}
		
		bfs(0);
		vl par, impar;
		ff(i, 0, n){
			if(d[i] % 2 == 0){
				par.pb(i);
			}
			else{
				impar.pb(i);
			}
		}
		
		if(par.size() < impar.size()){
			cout << par.size() << ed;
			ff(i, 0, par.size()){
				cout << par[i]+1 << " ";
			}
		}
		else{
			cout << impar.size() << ed;
			ff(i, 0, impar.size()){
				cout << impar[i]+1 << " ";
			}
		}
		cout << ed;
	}
	
	return 0;
}
