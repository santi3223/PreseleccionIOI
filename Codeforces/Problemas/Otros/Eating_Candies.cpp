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
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
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
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll l = 0, r = n-1, cl = arr[l], cr = arr[r], maxx = 0;
		while(l < r){
			if(cl == cr){
				maxx = max(maxx, l + (n-r+1));
			}
			if(cl <= cr){
				l++;
				cl += arr[l];
			}
			else if(cr < cl){
				r--;
				cr += arr[r];
			}
		}
		cout << maxx << ed;
	}
	
	return 0;
}
