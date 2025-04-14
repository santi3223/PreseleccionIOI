#include <bits/stdc++.h>
using namespace std;
#define ll long long  ////////////////////////////////////////////////////////////////////////////
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<vl> g(n, vl(n));
		ff(i, 0, n){
			ff(j, 0, n){
				cin >> g[i][j];
			}
		}
		vl res;
		ff(j, 0, n){
			res.pb(g[0][j]);
		}
		ff(i, 1, n){
			res.pb(g[i][n-1]);
		}
		ll exc = 2*n;
		vl fin = res;
		sort(all(fin));
		ff(i, 0, fin.size()){
			//cout << fin[i] << " " << i+1 << ed;
			if(fin[i] != i+1){
				exc = i+1;
				break;
			}
		}
		cout << exc << " ";
		ff(i, 0, res.size()){
			cout << res[i] << " ";
		}
		cout << ed;
		//cout << ed;
	}
	
	return 0;
}
