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
		k--;
		vl arr(n);
		set<ll> st;
		ll tower = 0;
		ff(i, 0, n){
			cin >> arr[i];
			tower = max(tower, arr[i]);
			st.insert(arr[i]);
		}
		ll level = 1, maxx = arr[k];
		for(auto &x : st){
			if(x <= maxx){
				continue;
			}
			ll diff = x-maxx;
			//cout << level << " " << diff << "  " << maxx << ed;
			if(level+diff-1 > maxx){
				break;
			}
			maxx = x;
			level += diff;
		}
		if(tower == maxx){
			cout << "YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
	}
	
}
