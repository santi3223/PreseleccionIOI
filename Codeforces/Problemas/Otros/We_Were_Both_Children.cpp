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
	while(t--){
		ll n;
		cin >> n;
		vl c(n+1), maxx(n+1, 0);
		ff(i, 0, n){
			ll x;
			cin >> x;
			if(x <= n){
				c[x]++;
			}
		}
		ff(i, 1, n+1){
			for(ll j = i; j <= n; j += i){
				maxx[j] += c[i];
			}
		}
		cout << *max_element(all(maxx)) << ed;
		
	}
}
