#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define ed "\n"
#define pb push_back


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
		ll id = 0;
		ff(i, 0, n){
			if(arr[i] < arr[id]){
				id = i;
			}
		}
		bool ok = true;
		ff(i, id+1, n){
			if(arr[i] < arr[i-1]){
				ok = false;
				break;
			}
		}
		if(ok){
			cout << id << ed;
		}
		else{
			cout << -1 << ed;
		}
	}
 
}
 
