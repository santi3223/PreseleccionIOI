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
		ll n;
		cin >> n;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll minn = *min_element(all(arr));
		ll c = 0;
		bool ok = true;
		ff(i, 0, n){
			if(minn == arr[i]){
				c++;
			}
			if((minn & arr[i]) != minn){
				ok = false;
				break;
			}
		}
		if(!ok){
			cout << 0 << ed;
			continue;
		}
		ll fact = 1;
		ff(i, 1, n-1){
			fact = (fact*i)%MOD;
		}
		ll ans = (c*(c-1))%MOD;
		ans = (ans*fact)%MOD;
		cout << ans << ed;
	}

}
