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
//ll MOD = 1000000000;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		string str(m, 'B');
		ff(ii, 0, n){
			ll x;
			cin >> x;
			x--;
			x = min(x, m-x-1);
			if(str[x] == 'B'){
				str[x] = 'A';
			}
			else{
				str[m-x-1] = 'A';
			}
		}
		cout << str << ed;
	}
	
}
