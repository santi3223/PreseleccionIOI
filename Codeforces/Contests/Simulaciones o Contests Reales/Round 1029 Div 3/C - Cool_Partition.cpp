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
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll c = 1;
		set<ll> cur, prev;
		ff(i, 0, n){
			if(i == 0){
				set<ll> x;
				x.insert(arr[i]);
				prev = x;
				continue;
			}
			cur.insert(arr[i]);
			prev.erase(arr[i]);
			if(prev.empty()){
				prev = cur;
				cur.clear();
				c++;
			}
		}
		cout << c << ed;
	}
}
