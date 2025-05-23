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
ll MOD = 1e9+7;


int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n+5);
		arr[0] = 0;
		ff(i, 0, n){
			ll x;
			cin >> x;
			arr[i+1] = arr[i]^x;
		}
		bool ok = false;
		if(arr[n] == 0){
			ok = true;
		}
		ff(i, 1, n){
			ff(j, i+1, n){
				ll a = arr[i], b = arr[j]^arr[i], c = arr[n]^arr[j];
				if(a == b && b == c){
					ok = true;
				}
			}
		}
		if(ok){
			cout << "YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
		
	}
	
	return 0;
}

