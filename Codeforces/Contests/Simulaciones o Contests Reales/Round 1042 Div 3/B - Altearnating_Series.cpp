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
		vl a;
		if(n == 2){
			cout << "-1 2" << ed;
			continue;
		}
		if(n % 2 == 0){
			ff(i, 0, n-1){
				if(i % 2 == 0){
					cout << -1 << " ";
				}
				else{
					cout << 3 << " ";
				}
			}
			cout << 2 << ed;
			continue;
		}
		ff(i, 0, n){
			if(i % 2 == 0){
				cout << -1 << " ";
			}
			else{
				cout << 3 << " ";
			}
		}
		cout << ed;
	}
}
