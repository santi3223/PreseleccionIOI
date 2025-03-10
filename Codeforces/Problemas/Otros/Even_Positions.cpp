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
		string str;
		cin >> n >> str;
		ll p = 0, c = 0;
		for(ll i = 0; i < n; i += 2){
			if(p > 0){
				p--;
			}
			else{
				p++;
			}
			c += p;
			if(str[i+1] == '('){
				p++;
			}
			else{
				p--;
			}
			c += p;
		}
		cout << c << ed;
	}
	
	
	return 0;
}

