//Lin idolo, explicaciones 10/10
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

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, x, y;
		string a, b;
		cin >> n >> x >> y >> a >> b;
		ll c = 0;
		vl mal;
		ff(i, 0, n){
			if(a[i] != b[i]){
				mal.pb(i);
			}
		}
		n = mal.size();
		if(n % 2 != 0){
			cout << -1 << ed;
			continue;
		}
		if(n != 0){
			if(y < x){
				c = (n / 2) * y;
				if(n == 2 && mal[1] == mal[0] + 1){
					c = min(2 * y, x);
				}
			}
			else{
				vector<vl> arr(n, vl(n, 0));
				ff(l, 1, n){
					for(ll i = 0, j = l; j < n; i++, j++){
						if(j == i + 1){
							arr[i][j] = min((mal[j] - mal[i]) * x, y);
						}
						else{
							ll c1 = LLONG_MAX, c2 = min((mal[j] - mal[i]) * x, y) + arr[i+1][j-1];
							ll c3 = LLONG_MAX;
							if(i + 2 < n){
								c1 = min((mal[i+1] - mal[i]) * x, y) + arr[i+2][j];
							}
							if(j - 2 >= 0){
								c3 = min((mal[j] - mal[j-1]) * x, y) + arr[i][j-2];
							}
							arr[i][j] = min({c1, c2, c3});
						}
					}
				}
				c = arr[0][n-1];
			}
		}
		cout << c << ed;
	}
	return 0;
}
