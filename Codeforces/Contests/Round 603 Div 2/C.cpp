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
ll MOD = 1e9+7;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		set<ll> st;
		for(ll i = 1; i*i <= n; i++){
			st.insert(n/i);
			st.insert(i);
			if(n/i == 0){
				break;
			}
		}
		cout << st.size()+1 << ed;
		cout << 0 << " ";
		for(auto &x : st){
			cout << x << " ";
		}
		cout << ed;
	}

	return 0;
}
