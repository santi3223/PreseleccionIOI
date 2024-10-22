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

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll c = 0;
		while(true){
			if(n % 2 == 0){
				n /= 2;
				c++;
			}
			else if(n % 3 == 0){
				n = 2*n/3;
				c++;
			}
			else if(n % 5 == 0){
				n = 4*n/5;
				c++;
			}
			else if(n == 1){
				cout << c;
				break;
			}
			else{
				cout << -1;
				break;
			}
		}
		cout << ed;
	}
	
	return 0;
}
