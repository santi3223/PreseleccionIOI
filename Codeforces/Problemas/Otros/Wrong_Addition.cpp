#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
		string a, c;
		cin >> a >> c;
		string b;
		ll n = a.size(), m = c.size();
		ll j = m-1;
		bool ok = true;
		for(ll i = n-1; i >= 0; i--){
			if(j < 0){
				ok = false;
				break;
			}
			ll x = a[i]-'0', y = c[j]-'0';
			if(x <= y){
				b += (y-x)+'0';
			}
			else{
				if(j-1 < 0){
					ok = false;
					break;
				}
				y = 10*(c[j-1]-'0')+(c[j]-'0');
				j--;
				if(y < 10 || y > 18){
					ok = false;
					break;
				}
				b += (y-x)+'0';
			}
			j--;
		}
		if(!ok){
			cout << -1 << ed;
			continue;
		}
		while(j >= 0){
			b += c[j];
			j--;
		}
		reverse(all(b));
		ll ans = stoll(b);
		cout << ans << ed;
	}

}
