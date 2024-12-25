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
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		vector<vector<pll>> conexiones(n);
		vl lento(n);
		ff(i, 0, m){
			ll a, b, c;
			cin >> a >> b >> c;
			a--;
			b--;
			conexiones[a].pb({b, c});
			conexiones[b].pb({a, c});
		}
		ff(i, 0, n){
			cin >> lento[i];
		}
		vector<vl> time(n, vl(n, LLONG_MAX));
		time[0][0] = 0;
		priority_queue<vl> q;
		q.push({0,0,0});
		while(!q.empty()){
			vl top = q.top();
			q.pop();
			ll tiempo = -top[0], node = top[1], bike = top[2];
			for(auto u : conexiones[node]){
				if(tiempo + u.se * lento[bike] < time[u.fi][bike]){
					time[u.fi][bike] = tiempo + u.se  * lento[bike];
					if(lento[bike] <= lento[u.fi]){
						q.push({-time[u.fi][bike], u.fi, bike});
					}
					else{
						q.push({-time[u.fi][bike], u.fi, u.fi});
					}
				}
			}
		}
		ll minn = LLONG_MAX;
		for(auto p : time.back()){
			minn = min(minn, p);
		}
		cout << minn << ed;
		
	}
	
	return 0;
}
//thx Lin
