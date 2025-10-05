#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define ed "\n"
#define pb push_back


int main(){
	ll n;
	cin >> n;
	ll a = 0, b = 0;
	bool both = false;
	ff(i, 0, n){
		ll x, y;
		cin >> x >> y;
		a += x;
		b += y;
		if((x % 2) != (y % 2)){
			both = true;
		}
	}
	if(a % 2 == 0 && b % 2 == 0){
		cout << 0 << ed;
	}
	else if((a % 2) != (b % 2)){
		cout << -1 << ed;
	}
	else{
		if(both){
			cout << 1 << ed;
		}
		else{
			cout << -1 << ed;
		}
	}
 
}
 
