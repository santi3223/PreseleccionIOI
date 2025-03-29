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
		ll sum = 0;
		bool ok = true;
		ff(i, 0, n){
			cin >> arr[i];
			sum += arr[i];
			if(sum <= 0){
				ok = false;
			}
		}
		sum = 0;
		for(ll i = n-1; i >= 0; i--){
			sum += arr[i];
			if(sum <= 0){
				ok = false;
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


