#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		set<ll> st;
		ff(i, 0, n){
			ll x;
			cin >> x;
			st.insert(x);
		}
		if(st.size() > k){
			cout << -1 << ed;
			continue;
		}
		cout << n*k << ed;
		ff(i, 0, n){
			for(auto p : st){
				cout << p << " ";
			}
			ff(j, 0, k-st.size()){
				cout << "1 ";
			}
		}
		cout << ed;
	}
		

	return 0;
}
