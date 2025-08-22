#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		string a, b, c;
		cin >> n >> a >> m >> b >> c;
		string res = "";
		ff(i, 0, m){
			if(c[i] == 'V'){
				res.pb(b[i]);
			}
			else{
				a.pb(b[i]);
			}
		}
		reverse(all(res));
		cout << res << a << ed;
	}
}
