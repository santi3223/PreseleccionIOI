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
ll MOD = 998244353;

vector<vl> arr;
ll c = 1, n;
void calc(){
	ff(i, 0, n){
		ll k = arr[i].size();
		if(k == 0){
			arr[i].pb(c);
			c++;
			calc();
		}
		else{
			ll a = arr[i][k-1];
			a += c;
			ll x = sqrt(a);
			if(x*x == a){
				arr[i].pb(c);
				c++;
				calc();
			}
		}
	}
}

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		cin >> n;
		arr = vector<vl>(n);
		c = 0;
		calc();
		cout << c-1 << ed;
	}
	
	return 0;
}
	
