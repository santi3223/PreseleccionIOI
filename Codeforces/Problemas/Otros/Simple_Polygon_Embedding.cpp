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
long double pi = 2*acos(0.0);
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		long double c = 1/(tan(pi/(2*n)));
		cout << fixed << setprecision(9) << c << ed;
	}
 
}
 
