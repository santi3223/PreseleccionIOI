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
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		sort(all(arr));
		vl p(n+1, 0);
		ff(i, 1, n+1){
			p[i] = p[i-1]+arr[i-1];
		}
		ll maxx = 0;
		ff(i, 0, k+1){
			maxx = max(maxx, p[n-(k-i)]-p[2*i]);
		}
		cout << maxx << ed;
		
	}
	
	return 0;
}
