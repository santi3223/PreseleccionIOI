#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		set<ll> st;
		ff(i, 0, n){
			ll x;
			cin >> x;
			st.insert(x);
		}
		ll id = 0, prev = -1;
		ll q = 1;
		for(auto &p : st){
			if(id == 0){
				prev = p;
				id++;
				continue;
			}
			if(prev+1 < p){
				q++;
				prev = p;
				continue;
			}
			if(prev+1 == p){
				continue;
			}
			
			
		}
		cout << q << ed;
	}
	
}

