#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, q;
		cin >> n >> q;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		sort(rall(arr));
		ff(i, 1, n){
			arr[i] += arr[i-1];
		}
		while(q--){
			ll x;
			cin >> x;
			if(arr[n-1] < x){
				cout << -1;
			}
			else{
				ll p = lower_bound(all(arr), x) - arr.begin();
				cout << p+1;
			}
			cout << ed;
		}
		
	}
	
    return 0;
}
