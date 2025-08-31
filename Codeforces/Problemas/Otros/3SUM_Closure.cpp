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

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl pos, neg, arr;
		ff(i, 0, n){
			ll x;
			cin >> x;
			if(x > 0){
				pos.pb(x);
			}
			else if(x < 0){
				neg.pb(x);
			}
			else if(arr.size() < 2){
				arr.pb(x);
			}
		}
		if(pos.size() > 2 || neg.size() > 2){
			cout << "NO" << ed;
			continue;
		}
		ff(i, 0, pos.size()){
			arr.pb(pos[i]);
		}
		ff(i, 0, neg.size()){
			arr.pb(neg[i]);
		}
		bool ok = true;
		ff(i, 0, arr.size()){
			ff(j, i+1, arr.size()){
				ff(k, j+1, arr.size()){
					bool p = false;
					ff(l, 0, arr.size()){
						if(arr[i]+arr[j]+arr[k] == arr[l]){
							p = true;
						}
					}
					if(!p){
						ok = p;
					}
				}
			}
		}
		cout << (ok ? "YES" : "NO") << ed;
	}
	
}
