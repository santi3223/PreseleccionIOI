#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
			arr[i]--;
		}
		vl visited(n), ans(n);
		ff(i, 0, n){
			if(!visited[i]){
				vl cur;
				while(!visited[i]){
					cur.pb(i);
					visited[i] = true;
					i = arr[i];
				}
				ff(j, 0, cur.size()){
					ans[cur[j]] = cur.size();
				}
			}
		}
		ff(i, 0, n){
			cout << ans[i] << " ";
		}
		cout << ed;
		
	}
}
