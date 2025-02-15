#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
    IO
    ll t;
    cin >> t;
    while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		unordered_map<ll, ll> mp;
		ll par = 0, imp = 0;
		vl vpar, vimp;
		ff(i, 0, n){
			ll x;
			cin >> x;
			mp[x]++;
			if(x % 2 == 0){
				vpar.pb(x);
				par++;
			}
			else{
				vimp.pb(x);
				imp++;
			}
		}
		if(imp % 2 == 0 && par % 2 == 0){
			cout << "YES" << ed;
			continue;
		}
		if(imp % 2 != par % 2){
			cout << "NO" << ed;
			continue;
		}
		bool ok = false;
		ff(i, 0, vimp.size()){
			ll x = vimp[i];
			if(mp[x-1] > 0 || mp[x+1] > 0){
				ok = true;
				break;
			}
		}
		if(ok){
			cout << "YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
    }
    
    return 0;
}

