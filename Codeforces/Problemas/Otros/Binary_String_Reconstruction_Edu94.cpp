#include <bits/stdc++.h>
//#include "mushrooms.h"
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1000000000;

int main(){
	ll t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		ll x;
		cin >> x;
		ll n = str.size();
		string res(n, '1');
		ff(i, 0, n){
			if(str[i] == '0'){
				if(i-x >= 0){
					res[i-x] = '0';
				}
				if(i+x < n){
					res[i+x] = '0';
				}
			}
		}
		bool ok = true;
		ff(i, 0, n){
			bool a = false;
			if(i-x >= 0 && res[i-x] == '1'){
				a = true;
			}
			if(i+x < n && res[i+x] == '1'){
				a = true;
			}
			if(a != (str[i] == '1')){
				ok = false;
				break;
			}
		}
		if(!ok){
			cout << -1 << ed;
		}
		else{
			cout << res << ed;
		}
	}
}
