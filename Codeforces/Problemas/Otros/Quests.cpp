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
		ll n, k;
		cin >> n >> k;
		vl arr(n), brr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ff(i, 0, n){
			cin >> brr[i];
		}
		
		ll c = 0, s = 0, maxx = 0;
		ff(i, 0, min(n, k)){
			s += arr[i];
			maxx = max(maxx, brr[i]);
			c = max(c, s+maxx*(k-i-1));
		}
		cout << c << ed;
	}
	
	return 0;
}

