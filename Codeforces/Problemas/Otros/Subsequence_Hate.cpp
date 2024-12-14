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
		string str;
		cin >> str;
		ll r1 = 0, r0 = 0, n = str.size();
		ff(i, 0, n){
			if(str[i] == '1'){
				r1++;
			}
			else{
				r0++;
			}
		}
		ll minn = LLONG_MAX;
		ll l1 = 0, l0 = 0;
		ff(i, 0, n){
			if(str[i] == '1'){
				r1--;
				l1++;
			}
			else{
				r0--;
				l0++;
			}
			minn = min({minn, l0+r1, l1+r0});
		}
		cout << minn << ed;
	}
	
	return 0;
}
