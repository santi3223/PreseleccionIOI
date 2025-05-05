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
		ll n;
		cin >> n;
		vl arr(n);
		ll sum = 0;
		ff(i, 0, n){
			cin >> arr[i];
			sum += arr[i];
			
        }
        for(ll i = n; i > 0; i--){
			if(sum % i == 0){
				ll need = sum / i;
				ll cur = 0;
				bool ok = true;
				ff(j, 0, n){
					cur += arr[j];
					if(cur > need){
						ok = false;
						break;
					}
					else if(cur == need){
						cur = 0;
					}
				}
				if(ok){
					cout << n-i << ed;
					break;
				}
			}
		}
    }
	
	return 0;
}
