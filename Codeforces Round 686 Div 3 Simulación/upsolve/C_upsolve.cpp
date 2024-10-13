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
		ll prev = 0;
		set<ll> st;
		ff(i, 0, n){
			ll x;
			cin >> x;
			st.insert(x);
			if(i == 0){
				arr.pb(x);
			}
			else{
				if(arr[prev] != x){
					prev++;
					arr.pb(x);
				}
			}
		}
		vl count(n+1, 1);
		n = arr.size();
		count[arr[0]]--; count[arr[n-1]]--;
		ff(i, 0, n){
			count[arr[i]]++;
		}
		ll minn = LLONG_MAX;
		ff(i, 0, n){
			minn = min(minn, count[arr[i]]);
		}
		cout << minn << ed;
		
	}
	return 0;
}
