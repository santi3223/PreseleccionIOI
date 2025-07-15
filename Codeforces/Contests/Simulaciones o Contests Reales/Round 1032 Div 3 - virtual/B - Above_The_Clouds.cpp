#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back
#define pll pair<ll, ll>
#define fi first
#define se second

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		string str;
		cin >> n >> str;
		map<char, ll> mp;
		ff(i, 0, n){
			mp[str[i]]++;
		}
		bool ok = false;
		for(auto &p : mp){
			if(p.se >= 3){
				ok = true;
				break;
			}
			if(p.se == 2){
				ll q = 2;
				if(str[0] == p.fi){
					q--;
				}
				if(str[n-1] == p.fi){
					q--;
				}
				if(q >= 1){
					ok = true;
					break;
				}
			}
		}
		if(ok){
			cout << "Yes";
		}
		else{
			cout << "No";
		}
		cout << ed;
		
	}

  return 0;
}
