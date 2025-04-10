#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

bool check(ll n){
	ff(i, 2, min(50000LL, n)){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
unordered_map<ll, bool> poww;
void st(){
	ll i = 1;
	while(i <= 1e9){
		poww[i] = true;
		i *= 2;
	}
}

int main(){
	st();
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		bool ok = false;
		if(n == 1){
			ok = true;
		}
		if(n > 2 && n % 2 == 0){
			if(poww[n]){
				ok = true;
			}
			else if(n % 4 != 0 && check(n/2)){
				ok = true;
			}
		}
		if(ok){
			cout << "FastestFinger" << ed;
		}
		else{
			cout << "Ashishgup" << ed;
		}
	}
	return 0;
}
