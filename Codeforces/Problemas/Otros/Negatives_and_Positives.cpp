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
		ll n;
		cin >> n;
		vl arr(n);
		ll q = 0, c = 0;
		ff(i, 0, n){
			cin >> arr[i];
			if(arr[i] < 0){
				q++;
				arr[i] = -arr[i];
			}
			c += arr[i];
		}
		if(q % 2 != 0){
			sort(all(arr));
			c -= 2*arr[0];
		}
		cout << c << ed;
		
	}
	
	return 0;
}
