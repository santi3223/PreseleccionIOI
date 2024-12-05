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
		ll n, k;
		cin >> n >> k;
		if(n % 2 == 0){
			n /= 2;
			if(k == n){
				cout << "YES";
			}
			else{
				cout << "NO";
			}
		}
		else{
			ll c1 = n/2, c2= c1+1;
			if(c1 == k || c2 == k){
				cout << "YES";
			}
			else{
				cout << "NO";
			}
		}
		cout << ed;
	}
	return 0;
}
