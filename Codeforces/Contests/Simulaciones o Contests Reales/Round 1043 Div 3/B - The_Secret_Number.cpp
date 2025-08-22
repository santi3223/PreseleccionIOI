#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

int main(){
	ll t;
	cin >> t;
	vl p(20, 1);
	ff(i, 1, 19){
		p[i] = p[i-1]*10;
	}
	while(t--){
		ll n;
		cin >> n;
		vl res;
		ff(i, 1, 19){
			ll de;
			if(p[i] > n-1) break;
			de = p[i]+1;
			if(n % de == 0){
				res.pb(n/de);
			}
		}
		if(res.empty()){
			cout << 0 << ed;
			continue;
		}
		sort(all(res));
		cout << res.size() << ed;
		ff(i, 0, res.size()){
			cout << res[i] << " ";
		}
		cout << ed;
	}
}
