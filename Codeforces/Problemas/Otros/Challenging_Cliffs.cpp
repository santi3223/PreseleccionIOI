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
		sort(all(arr));
		if(n == 2){
			cout << arr[0] << " " << arr[1] << ed;
			continue;
		}
		ll p = -1, minn = LLONG_MAX;
		ff(i, 1, n){
			if(minn > abs(arr[i]-arr[i-1])){
				p = i;
				minn = abs(arr[i]-arr[i-1]);
			}
		}
		ff(i, p, n){
			cout << arr[i] << " " ;
		}
		ff(i, 0, p){
			cout << arr[i] << " ";
		}
		cout << ed;
	}
	
	return 0;
}
