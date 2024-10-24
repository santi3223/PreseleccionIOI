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

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		vector<vl> matrix(n, vl(m));
		ll c = 0;
		ff(i, 0, n){
			ff(j, 0, m){
				cin >> matrix[i][j];
				if(i > 0 && j > 0){
					if(matrix[i][j] != matrix[i-1][j-1]){
						c++;
					}
				}
			}
		}
		ll q;
		cin >> q;
		while(q--){
			ll x, y, v;
			cin >> x >> y >> v;
			x--; y--;
			ll base = matrix[x][y];
			matrix[x][y] = v;
			if(x-1 >= 0 && y-1 >= 0){
				if(matrix[x-1][y-1] == matrix[x][y] && matrix[x][y] != base){
					c--;
				}
				if(matrix[x-1][y-1] != matrix[x][y] && matrix[x-1][y-1] == base){
					c++;
				}
			}
			if(x+1 < n && y+1 < m){
				if(matrix[x+1][y+1] == matrix[x][y] && matrix[x][y] != base){
					c--;
				}
				if(matrix[x+1][y+1] != matrix[x][y] && matrix[x+1][y+1] == base){
					c++;
				}
			}
			if(c == 0){
				cout << "Yes";
			}
			else{
				cout << "No";
			}
			cout << ed;
		}
	}
	
	return 0;
}
