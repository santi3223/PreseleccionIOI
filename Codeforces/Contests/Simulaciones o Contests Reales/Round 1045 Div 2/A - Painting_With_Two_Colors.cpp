#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, a, b;
		cin >> n >> a >> b;
		if(a <= b){
			a = b;
		}
		cout << ((n%2) == (a%2) && (a%2) == (b%2) ? "YES" : "NO") << ed;
	}
}
