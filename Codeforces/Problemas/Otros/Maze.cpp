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

int main(){
	IO
	ll n, m, k;
	cin >> n >> m >> k;
	vs grid(n);
	ll puntos = 0;
	ff(i, 0, n){
		cin >> grid[i];
	}
	ll xx = 0 , yy = 0, maxx = 0;
	ff(i, 0, n){
		ff(j, 0, m){
			if(grid[i][j] == '.'){
				puntos++;
				ll c = 0;
				if(i+1 < n && grid[i+1][j] == '#'){
					c++;
				}
				if(i-1 >= 0 && grid[i-1][j] == '#'){
					c++;
				}
				if(j+1 < n && grid[i][j+1] == '#'){
					c++;
				}
				if(j-1 >= 0 && grid[i][j-1] == '#'){
					c++;
				}
				if(c > maxx){
					xx = i;
					yy = j;
					maxx = max(maxx, c);
				}
			}
		}
	}
	vector<vb> visited(n, vb(m, false));
	queue<pll> q;
	q.push({xx, yy});
	ll cant = 0;
	while(!q.empty()){
		if(puntos-k == cant){
			break;
		}
		pll pp = q.front();
		q.pop();
		ll a = pp.fi, b = pp.se;
		if(visited[a][b]){
			continue;
		}
		visited[a][b] = true;
		cant++;
		if(a+1 < n && grid[a+1][b] != '#'){
			q.push({a+1, b});
		}
		if(b+1 < m && grid[a][b+1] != '#'){
			q.push({a, b+1});
		}
		if(a-1 >= 0 && grid[a-1][b] != '#'){
			q.push({a-1, b});
		}
		if(b-1 >= 0 && grid[a][b-1] != '#'){
			q.push({a, b-1});
		}		
	}
	ff(i, 0, n){
		ff(j, 0, m){
			if(grid[i][j] == '.' && !visited[i][j]){
				cout << 'X';
			}
			else{
				cout << grid[i][j];
			}
		}
		cout << ed;
		
	}
	return 0;
}
