#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
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
		ll l = 0, r = n-1;
		ll minn = 1, maxx = n;
		while(l < r){
			if(arr[l] == minn){
				l++;
				minn++;
			}
			else if(arr[l] == maxx){
				l++;
				maxx--;
			}
			else if(arr[r] == minn){
				r--;
				minn++;
			}
			else if(arr[r] == maxx){
				r--;
				maxx--;
			}
			else{
				break;
			}
		}
		(l == r) ? (cout << -1 << ed) : (cout << l+1 << " " << r+1 << ed);
	}

}
