#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		string str;
		cin >> n >> str;
		vector<string> arr;
		string x;
		ff(i, 0, n){
			if(str[i] == 'W'){
				if(!x.empty()){
					arr.pb(x);
					x.clear();
				}
			}
			else{
				x += str[i];
			}
		}
		if(!x.empty()) arr.pb(x);
		bool ok = true;
		for(auto &p : arr){
			bool r = false, b = false;
			ff(i, 0, p.size()){
				if(p[i] == 'R') r = true;
				if(p[i] == 'B') b = true;
				
			}
			if(r ^ b){
				ok = false;
				break;
			}
		}
		cout << (ok ? "YES" : "NO") << ed;
	}

}
