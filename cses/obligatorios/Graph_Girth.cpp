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

int main(){
	IO
	ll n, m;
	cin >> n >> m;
	vector<vl> conexiones(n+1);
	while(m--){
		ll a, b;
		cin >> a >> b;
		conexiones[a].pb(b);
		conexiones[b].pb(a);
	}
	ll minn = LLONG_MAX;
	
	ff(st, 1, n+1){
		vl dist(n+1, -1);
		queue<pll> q;
		q.push({st, -1});
		dist[st] = 0;
		while(!q.empty()){
			auto [cur, par] = q.front();
			q.pop();
			for(ll u : conexiones[cur]){
				if(dist[u] == -1){
					dist[u] = dist[cur]+1;
					q.push({u, cur});
				}
				else if(u != par){
					ll cycle = dist[cur] + dist[u] + 1;
					minn = min(minn, cycle);
				}
			}
		}
	}
	if(minn == LLONG_MAX){
		cout << -1;
	}
	else{
		cout << minn;
	}
	return 0;
}
