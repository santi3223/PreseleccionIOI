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
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int travel_plan(int N, int M, int R[][2], int L[], int K, int P[]){
	vector<vector<pll>> conexiones(N);
	vector<pll> dist(N, {LLONG_MAX, LLONG_MAX});
	vb visited(N, false);
	vl existe;
	
	ff(i, 0, M){
		conexiones[R[i][0]].pb({R[i][1], L[i]});
		conexiones[R[i][1]].pb({R[i][0], L[i]});
	}
	ff(i, 0, K){
		existe.pb(P[i]);
	}
	
	priority_queue<pll, vector<pll>, greater<pll>> qq;
	ff(i, 0, K){
		qq.push({0, existe[i]});
		dist[existe[i]] = {0, 0};
	}
	
	while(!qq.empty()){
		ll nod = qq.top().se;
		qq.pop();
		if(visited[nod]){
			continue;
		}
		visited[nod] = true;
		
		ff(i, 0, conexiones[nod].size()){
			ll x = conexiones[nod][i].fi, y = conexiones[nod][i].se;
			if(dist[nod].se + y < dist[x].fi){
				if(dist[x].fi < dist[x].se){
					dist[x].se = dist[x].fi;
				}
				dist[x].fi = dist[nod].se+y;
			}
			else if(dist[nod].se + y < dist[x].se){
				dist[x].se = dist[nod].se+y;
			}
			if(dist[x].se != LLONG_MAX){
				qq.push({dist[x].se, x});
			}
		}
	}
	
	return dist[0].se;
}

/*
int main(){
	IO
	int n, m, k;
	cin >> n >> m >> k;
	int r[m][2];
	int l[m];
	int p[k];
	ff(i, 0, m){
		int a, b;
		cin >> a >> b;
		r[i][0] = a;
		r[i][1] = b;
	}
	ff(i, 0, m){
		cin >> l[i];
	}
	ff(i, 0, k){
		cin >> p[i];
	}
	cout << travel_plan(n, m, r, l, k, p);
}

*/
