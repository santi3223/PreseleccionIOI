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
		if(n == 1){
			cout << 3 << ed;
			continue;
		}
		if(n == 2){
			n = 3;
		}
		ll c = ceil((long double)log2(n+1));
		//cout << "C " << c << ed;
		cout << c*2+1 << ed;
	}
}
