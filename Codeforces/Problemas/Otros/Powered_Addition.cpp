#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second

vl poww;

void create(){
	ll i = 1;
	while(i <= 1e10){
		poww.pb(i);
		i *= 2;
	}
}
int main(){
	create();
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll act = arr[0], maxx = 0;
		ff(i, 1, n){
			if(act >= arr[i]){
				maxx = max(maxx, act-arr[i]);
			}
			else{
				act = arr[i];
			}
		}
		ll c = upper_bound(all(poww), maxx)-poww.begin();
		cout << c << ed;
	}
	
	return 0;
}
