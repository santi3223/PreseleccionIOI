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
	vector<vector<pll>> conexiones(n+1);
	ff(i, 0, m){
		ll a, b, c;
		cin >> a >> b >> c;
		conexiones[a].pb({b, c});
	}
	
	vl dist(n+1, LLONG_MAX), count(n+1, 0), minn(n+1, LLONG_MAX), maxx(n+1, 0);
	dist[1] = 0;
	count[1] = 1;
	minn[1] = 0;
	priority_queue<pll, vector<pll>, greater<>> pq;
	pq.push({0, 1});
	
	while(!pq.empty()){
		auto cur = pq.top();
		pq.pop();
		ll cdist = cur.fi, node = cur.se;
		if(cdist > dist[node]){
			continue;
		}
		
		for(auto &edge : conexiones[node]){
			ll next = edge.fi, w = edge.se;
			
			if(dist[node] + w < dist[next]){
				dist[next] = dist[node] + w;
				count[next] = count[node];
				minn[next] = minn[node]+1;
				maxx[next] = maxx[node]+1;
				pq.push({dist[next], next});
			}
			else if(dist[node] + w == dist[next]){
				count[next] = (count[next] + count[node]) % MOD;
				minn[next] = min(minn[next], minn[node]+1);
				maxx[next] = max(maxx[next], maxx[node]+1);
			}
		}
	}
	
	cout << dist[n] << " " << count[n] << " " << minn[n] << " " << maxx[n];
	return 0;
}
