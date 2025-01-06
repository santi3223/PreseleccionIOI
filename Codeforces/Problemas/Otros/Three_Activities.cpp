#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 998244353;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<pll> arr(n), brr(n), crr(n);
		ff(i, 0, n){
			ll x;
			cin >> x;
			arr[i] = {x, i};
		}
		ff(i, 0, n){
			ll x;
			cin >> x;
			brr[i] = {x, i};
		}
		ff(i, 0, n){
			ll x;
			cin >> x;
			crr[i] = {x, i};
		}
		sort(rall(arr));
		sort(rall(brr));
		sort(rall(crr));
		ll maxx = 0;
		ff(i, 0, min(3LL, n)){
			ff(j, 0, min(3LL, n)){
				ff(k, 0, min(3LL, n)){
					if(arr[i].se != brr[j].se && arr[i].se != crr[k].se && brr[j].se != crr[k].se){
						maxx = max(maxx, arr[i].fi+brr[j].fi+crr[k].fi);
					}
				}
			}
		}
		cout << maxx << ed;
	}
	
	return 0;
	
}
