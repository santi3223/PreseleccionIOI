#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define vb vector<bool>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		bool ok = true;
		ff(i, 0, n-2){
			if(arr[i] < 0){
				ok = false;
				break;
			}
			ll op = arr[i];
			arr[i] -= op;
			arr[i+1] -= 2*op;
			arr[i+2] -= op;
		}
		if(!ok || arr[n-1] != 0 || arr[n-2] != 0){
			cout << "NO";
		}
		else{
			cout << "YES";
		}
		cout << ed;
		
	}
	return 0;
}
