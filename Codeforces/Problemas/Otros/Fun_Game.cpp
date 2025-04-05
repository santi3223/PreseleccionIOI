#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define vb vector<bool>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		string str, tt;
		cin >> n >> str >> tt;
		bool ok = true;
		ff(i, 0, n){
			if(str[i] != '0'){
				break;
			}
			if(str[i] == '0' && tt[i] != '0'){
				ok = false;
				break;
			}
		}
		if(ok){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << ed;
		
	}
	return 0;
}
