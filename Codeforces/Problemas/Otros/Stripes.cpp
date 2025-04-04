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
		ll n = 8;
		vector<string> str(8);
		ff(i, 0, n){
			cin >> str[i];
		}
		bool r = false;
		ff(i, 0, n){
			if(str[i] == "RRRRRRRR"){
				r = true;
				break;
			}
		}
		if(r){
			cout << "R" << ed;
		}
		else{
			cout << "B" << ed;
		}
		
	}
	return 0;
}
