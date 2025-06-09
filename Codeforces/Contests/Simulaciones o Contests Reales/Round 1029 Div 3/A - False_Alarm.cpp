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
		ll n, x;
		cin >> n >> x;
		vl arr(n);
		ll a = LLONG_MAX, b = 0;
		ff(i, 0, n){
			cin >> arr[i];
			if(arr[i] == 1){
				a = min(a, i);
				b = max(b, i);
			}
		}
		//cout << a << " " << b << ed;
		if(b-a+1 <= x || a == LLONG_MAX){
			cout << "YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
	}
}
