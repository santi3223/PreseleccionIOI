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
		ll n, m, k;
		cin >> n >> m >> k;
		ll l = 0, r = m, mid;
		while(l+1 < r){
			mid = (l+r)/2;
			if((m/(mid+1)*mid+m%(mid+1)) * n >= k){
				r = mid;
			}
			else{
				l = mid;
			}
		}
		cout << r << ed;
	}

}
