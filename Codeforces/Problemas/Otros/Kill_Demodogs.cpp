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
		ll c = (((n*(n+1))%MOD)*(4*n-1)%MOD*337)%MOD;
		cout << c << ed;
	}
 
}
 
