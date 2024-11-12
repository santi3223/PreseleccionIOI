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
		ll n, x;
		cin >> n >> x;
		vl arr(n);
		ll even = 0, odd = 0;
		ff(i, 0, n){
			cin >> arr[i];
			if(arr[i] % 2 == 0){
				even++;
			}
			else{
				odd++;
			}
		}
		if(n == x){
			if(odd % 2 == 0){
				cout << "No" << ed;
			}
			else{
				cout << "Yes" << ed;
			}
			continue;
		}
		ll minn = min(x-1, even);
		if((x-minn) % 2 == 0 && minn != 0){
			minn--;
		}
		x -= minn;
		if(x % 2 == 0 || odd == 0){
			cout << "No" << ed;
		}
		else{
			cout << "Yes" << ed;
		}
	}
	
	return 0;
}
