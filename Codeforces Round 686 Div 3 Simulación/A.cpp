#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ull __int128
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
		for(ll i = n; i >= 0; i--){
			arr.pb(i);
		}
		if(n % 2 == 1){
			swap(arr[n/2], arr[n/2+1]);
		}
		ff(i, 0, n){
			cout << arr[i] << " ";
		}
		cout << ed;
	}
	return 0;
}
