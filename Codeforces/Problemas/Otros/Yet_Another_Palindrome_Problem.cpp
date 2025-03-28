#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
		bool ok = false;
		ff(i, 0, n){
			ff(j, i+2, n){
				if(arr[i] == arr[j]){
					ok = true;
				}
			}
		}
		if(ok){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << ed;
	}
	
	
	return 0;
}


