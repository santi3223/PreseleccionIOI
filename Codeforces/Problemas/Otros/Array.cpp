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
	ll n;
	cin >> n;
	vl a, b, c;
	ff(i, 0, n){
		ll x;
		cin >> x;
		if(x == 0){
			c.pb(x);
		}
		else if(x < 0){
			a.pb(x);
		}
		else{
			b.pb(x);
		}
	}
	if(b.size() == 0){
		ff(i, 0, 2){
			b.pb(a.back());
			a.pop_back();
		}
	}
	if(a.size() % 2 == 0){
		c.pb(a.back());
		a.pop_back();
	}
	
	cout << a.size() << " ";
	ff(i, 0, a.size()){
		cout << a[i] << " ";
	}
	cout << ed;
	
	cout << b.size() << " ";
	ff(i, 0, b.size()){
		cout << b[i] << " ";
	}
	cout << ed;
	
	cout << c.size() << " ";
	ff(i, 0, c.size()){
		cout << c[i] << " ";
	}
	cout << ed;
	return 0;
}
