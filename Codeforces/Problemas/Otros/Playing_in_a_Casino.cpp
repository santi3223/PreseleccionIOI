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
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		vector<vl> arr(n, vl(m));
		ff(i, 0, n){
			ff(j, 0, m){
				cin >> arr[i][j];
			}
		}
		ll q = 0;
		ff(i, 0, m){
			vl temp;
			ll tot = 0;
			ff(j, 0, n){
				ll x = arr[j][i];
				temp.pb(x);
				tot += x;
			}
			sort(all(temp));
			ll cur = 0;
			ff(j, 0, n){
				cur += temp[j];
				q += abs(temp[j]*(n-1-j)-(tot-cur));
			}
		}
		cout << q << ed;
	}
	
	
    return 0;
}
