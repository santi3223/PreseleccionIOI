#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
ll MOD = 998224353;


int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, m, x;
		cout << "YES" << ed;
		cin >> n >> m >> x;
		set<pll> st;
		ff(i, 0, m){
			st.insert({0, i+1});
		}
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
			pll p = *st.begin();
			st.erase(p);
			cout << p.se << " ";
			st.insert({p.fi+arr[i], p.se});
		}
		cout << ed;
	}
	
	
	return 0;
}

