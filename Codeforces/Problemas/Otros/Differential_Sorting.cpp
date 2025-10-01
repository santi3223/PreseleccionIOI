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
		if(arr[n-2] > arr[n-1]){
			cout << -1 << ed;
			continue;
		}
		if(arr[n-1] >= 0){
			cout << n-2 << ed;
			ff(i, 1, n-1){
				cout << i << " " << n-1 << " " << n << ed;
			}
		}
		else if(is_sorted(all(arr))){
			cout << 0 << ed;
			continue;
		}
		else{
			cout << -1 << ed;
		}
	}
 
}
 
