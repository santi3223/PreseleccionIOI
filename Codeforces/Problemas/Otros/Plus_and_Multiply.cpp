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
		ll n, a, b;
		cin >> n >> a >> b;
		if(a == 1){
			if((n-1)% b == 0){
				cout << "Yes";
			}
			else{
				cout << "No";
			}
		}
		else{
			ll i = 1;
			bool ok = false;
			while(i <= n){
				if(i % b == n % b){
					ok = true;
					break;
				}
				i*= a;
			}
			if(ok){
				cout << "Yes";
			}
			else{
				cout << "No";
			}
		}
		cout << ed;
	}

    return 0;
}
