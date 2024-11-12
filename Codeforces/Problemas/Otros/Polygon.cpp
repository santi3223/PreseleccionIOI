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
		ll n;
		cin >> n;
		vs grid(n);
		ff(i, 0, n){
			cin >> grid[i];
		}
		
		bool ok = true;
		ff(i, 0, n){
			ff(j, 0, n){
				if(i == n-1 || j == n-1){
					continue;
				}
				if(grid[i][j] == '1'){
					if(grid[i+1][j] != '1' && grid[i][j+1] != '1'){
						ok = false;
						break;
					}
				}
			}
			if(!ok){
				break;
			}
		}
		
		if(ok){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << ed;
	}
	
	return 0;
}
