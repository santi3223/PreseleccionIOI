#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
 
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl a(n), b(n);
		ff(i, 0, n){
			cin >> a[i];
		}
		ff(i, 0, n){
			cin >> b[i];
		}
		ll c = 1;
		ff(i, 0, n){
			if(a[i] > b[i]){
				c += a[i]-b[i];
			}
		}
		cout << c << ed;
	}
}
