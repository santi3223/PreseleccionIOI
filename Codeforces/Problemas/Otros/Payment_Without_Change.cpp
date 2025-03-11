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
		ll a, b, n, s;
		cin >> a >> b >> n >> s;
		ll reach = min(a, s/n);
		s -= reach*n;
		cout << s << ed;
		s = max(0LL, s-b);
		if(s == 0){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << " " << s;
		cout << ed;
	}
	
	
	return 0;
}

