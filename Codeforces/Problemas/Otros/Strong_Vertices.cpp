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
		vl arr(n), brr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ff(i, 0, n){
			cin >> brr[i];
		}
		ll maxx = INT_MIN;
		ff(i, 0, n){
			maxx = max(maxx, arr[i]-brr[i]);
		}
		ll c = 0;
		ff(i, 0, n){
			if(arr[i]-brr[i] == maxx){
				c++;
			}
		}
		cout << c << ed;
		ff(i, 0, n){
			if(arr[i]-brr[i] == maxx){
				cout << i+1 << " ";
			}
		}
		cout << ed;
	}
	
	
	return 0;
}


