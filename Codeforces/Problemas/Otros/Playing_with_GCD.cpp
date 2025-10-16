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
		ll n;
		cin >> n;
		vl arr(n+2, 1);
		ff(i, 1, n+1){
			cin >> arr[i];
		}
		vl brr(n+2, 1);
		ff(i, 1, n+2){
			brr[i] = lcm(arr[i], arr[i-1]);
		}
		bool ok = true;
		ff(i, 1, n+1){
			if(gcd(brr[i], brr[i+1]) != arr[i]){
				ok = false;
				break;
			}
		}
		if(ok){
			cout <<"YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
	}
 
}
 
