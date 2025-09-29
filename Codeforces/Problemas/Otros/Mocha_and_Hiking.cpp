#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define ed "\n"
#define pb push_back
 
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n+1);
		ff(i, 1, n+1){
			cin >> arr[i];
		}
		if(arr[1] != 0){
			cout << n+1 << " ";
			ff(i, 1, n+1){
				cout << i << " ";
			}
			cout << ed;
			continue;
		}
		bool ok = false;
		ff(i, 1, n){
			if(arr[i] == 0 && arr[i+1] != 0){
				ff(j, 1, i+1){
					cout << j << " ";
				}
				cout << n+1 << " ";
				ff(j, i+1, n+1){
					cout << j << " ";
				}
				cout << ed;
				ok = true;
				break;
			}
		}
		if(ok){
			continue;
		}
		ff(i, 1, n+1){
			cout << i << " ";
		}
		cout << n+1 << ed;
	}
 
}
 
