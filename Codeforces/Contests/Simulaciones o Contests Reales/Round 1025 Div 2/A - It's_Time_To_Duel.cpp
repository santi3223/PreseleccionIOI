#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ll maxx = 0;;
		ll c = 0, c1 = 0;
		ff(i, 0, n){
			cin >> arr[i];
			if(arr[i] == 0){
				c++;
			}
			else{
				c1++;
				maxx = max(maxx, c);
				c = 0;
			}
		}
		maxx = max(maxx, c);

		if(maxx < 2 && c1 > 0 && maxx > 0){
			cout << "NO";
		}
		else{
			cout << "YES";
		}
		cout << ed;
	}
	
	return 0;
}
