#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define vl vector<ll>
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
		multiset<int> st;
		ff(i, 0, n){
			ll l, r;
			cin >> l >> r;
			auto it = st.upper_bound(r);
			if(it != st.end()){
				st.erase(it);
			}
			st.insert(l);
			cout << st.size() << " ";
		}
		cout << ed;
	}
	
}
