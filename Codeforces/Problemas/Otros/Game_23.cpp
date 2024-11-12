#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
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
	ll n, m;
	cin >> n >> m;
	if(m % n != 0){
		cout << -1;
		return 0;
	}
	ll c = 0;
	if(m % n == 0){
		ll x = m/n;
		while(x % 2 == 0){
			x /= 2;
			c++;
		}
		while(x % 3 == 0){
			x /= 3;
			c++;
		}
		if(x != 1){
			c = -1;
		}
	}
	cout << c;
	
	
	return 0;
}
