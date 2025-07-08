#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
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
		}
		if(count(all(arr), arr[0]) == n){
			cout << 1 << ed;
			ff(i, 0, n){
				cout << 1 << " ";
			}
			cout << ed;
			continue;
		}
		if(n % 2 == 0){
			cout << 2 << ed;
			ff(i, 0, n){
				cout << i%2+1 << " ";
			}
			cout << ed;
			continue;
		}
		bool ok = false;
		ff(i, 0, n){
			if(ok){
				break;
			}
			if(arr[i] == arr[(i+1) % n]){
				vl ans(n);
				for(ll j = 0, pos = i+1; pos < n; pos++, j ^= 1){
					ans[pos] = j+1;
				}
				for(ll j = 0, pos = i; pos >= 0; pos--, j ^= 1){
					ans[pos] = j+1;
				}
				cout << 2 << ed;
				ff(pos, 0, n){
					cout << ans[pos] << " ";
				}
				cout << ed;
				ok = true;
			}
		}
		if(ok){
			continue;
		}
		cout << 3 << ed;
		ff(i, 0, n-1){
			cout << i%2+1 << " ";
		}
		cout << 3 << ed;
	}
	
}
