
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second
ll MOD = 1e9+7;


int main(){
	ll t;
	cin >> t;
	while(t--){
		ll a, b, c;
		cin >> a >> b >> c;
		if(b == 0){
			if(a != 0){
				cout << string(a+1, '0') << ed;
			}
			else{
				cout << string(c+1, '1') << ed;
			}
			continue;
		}
		string str;
		ff(i, 0, b+1){
			if(i % 2 == 0){
				str += '0';
			}
			else{
				str += '1';
			}
		}
		str.insert(1, string(a, '0'));
		str.insert(0, string(c, '1'));
		cout << str << ed;
	}
	
	
	return 0;
}
