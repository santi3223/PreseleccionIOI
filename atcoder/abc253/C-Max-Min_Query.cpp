#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
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
	ll q;
	cin >> q;
	map<ll, ll> mset;
	while(q--){
		ll num;
		cin >> num;
		if(num == 1){
			ll x;
			cin >> x;
			mset[x]++;
		}
		else if(num == 2){
			ll x, c;
			cin >> x >> c;
			if(mset.find(x) != mset.end()){
				mset[x] -= min(c, mset[x]);
				if(mset[x] <= 0){
					mset.erase(x);
				}
			}
		}
		else if(num == 3){
			auto maxx = mset.end();
			auto minn = mset.begin();
			maxx--;
			cout << (*maxx).fi - (*minn).fi << ed;
		}
	}
}
