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
		ll n, k;
		string str;
		cin >> n >> k >> str;
		ll z = 0, o = 0;
		bool ok = true;
		ff(i, 0, k){
			ll x = -1;
			for(ll j = i; j < n; j += k){
				if(str[j] != '?'){
					if(x != -1 && str[j] - '0' != x){
						ok = false;
						break;
					}
					x = str[j] - '0';
				}
			}
			if(x != -1){
				if(x == 0){
					z++;
				}
				else{
					o++;
				}
			}
		}
		if(max(z, o) > k/2){
			ok = false;
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
