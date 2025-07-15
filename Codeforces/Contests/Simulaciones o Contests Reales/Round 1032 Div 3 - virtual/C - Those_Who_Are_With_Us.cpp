#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back
#define pll pair<ll, ll>
#define fi first
#define se second

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		vector<vl> arr(n, vl(m));
		vector<pll> id;
		ll maxx = 0;
		unordered_map<ll, ll> cols, rows;
		ll maxc = 0, maxr = 0, c = 0;
		ff(i, 0, n){
			ff(j, 0, m){
				ll x;
				cin >> x;
				arr[i][j] = x;
				//cout << "X" << x << "  ";
				if(x > maxx){
					cols.clear();
					rows.clear();
					maxc = 0;
					maxr = 0;
					maxx = x;
					c = 0;
				}
				if(maxx == x){
					c++;
					cols[j]++;
					rows[i]++;
				}
			}
		}
		bool ok = false;
		ff(i, 0, n){
			if(ok){
				break;
			}
			ff(j, 0, m){
				ll cur = cols[j]+rows[i];
				if(arr[i][j] == maxx){
					cur--;
				}
				if(cur == c){
					ok = true;
					break;
				}
			}
		}
		if(ok){
			cout << maxx-1 << ed;
		}
		else{
			cout << maxx << ed;
		}
		
	}

  return 0;
}
