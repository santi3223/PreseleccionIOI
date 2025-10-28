#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define vb vector<bool>
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		ll c = 0, minn = 0, res = str.size();
		ff(i, 0, str.size()){
			c += (str[i] == '+') ? 1 : -1;
			if(c < minn){
				minn = c;
				res += i+1;
			}
		}
		cout << res << ed;
	}
}
 
