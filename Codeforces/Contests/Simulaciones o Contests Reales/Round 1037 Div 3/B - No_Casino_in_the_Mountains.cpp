#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll tt;
	cin >> tt;
	while(tt--){
		ll n, k;
		cin >> n >> k;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll c = 0, cur = 0;
		bool rest = false;
		ff(i, 0, n){
			if(rest){
				rest = false;
				continue;
			}
			if(arr[i] == 1){
				cur = 0;
				continue;
			}
			else{
				cur++;
			}
			if(cur == k){
				cur = 0;
				c++;
				rest = true;
			}
		}
		cout << c << ed;
	}
	
}
