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
#define vb vector<bool>
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, a;
		cin >> n >> a;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		bool ok = false;
		if(n == 1){
			ok = (arr[0] == a);
		}
		else{
			sort(all(arr));
			ll i = 0, j = 1;
			while(i < n && j < n){
				if(arr[i] + abs(a) == arr[j]){
					ok = true;
					break;
				}
				else if(arr[i] + abs(a) < arr[j]) i++;
				else j++;
			}
		}
		cout << (ok ? "YES" : "NO") << ed;
	}
 
}
 
