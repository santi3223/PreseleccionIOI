#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
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
		set<ll> st;
		for(ll i = 2; i*i <= n; i++){
			if(n % i == 0 && !st.count(i)){
				st.insert(i);
				n /= i;
				break;
			}
		}
		for(ll i = 2; i*i <= n; i++){
			if(n % i == 0 && !st.count(i)){
				st.insert(i);
				n /= i;
				break;
			}
		}
		if((ll)st.size() < 2 || st.count(n) || n == 1){
			cout << "NO" << ed;
		}
		else{
			cout << "YES" << ed;
			for(auto it : st){
				cout << it << " ";
			}
			cout << n << ed;
		}
	}
	
	return 0;
}
