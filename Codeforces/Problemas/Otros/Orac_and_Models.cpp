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
		vl arr(n), ans(n, 1);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ff(i, 0, n){
			for(ll j = (i+1)*2-1; j < n; j += (i+1)){
				if(arr[i] < arr[j]){
					ans[j] = max(ans[j], ans[i]+1);
				}
			}
		}
		ll c = 0;
		ff(i, 0, n){
			c = max(c, ans[i]);
		}
		cout << c << ed;
	}
}
