#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr;
		unordered_map<ll, ll> count, position;
		ff(i, 0, n){
			ll x;
			cin >> x;
			count[x]++;
			position[x] = i;
			if(count[x] == 2){
				arr.erase(remove(all(arr), x), arr.end());
			}
			else if(count[x] == 1){
				arr.pb(x);
			}
		}
		if(arr.size() == 0){
			cout << -1 << ed;
			continue;
		}
		sort(all(arr));
		cout << position[arr[0]]+1 << ed;
	}
	return 0;
}
