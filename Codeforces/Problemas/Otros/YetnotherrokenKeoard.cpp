#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

int main(){
	ll t;
	cin >> t;
	while(t--){
		vl up, low;
		string arr;
		cin >> arr;
		ll n = arr.size();
		ff(i, 0, n){
			if(arr[i] != 'b' && arr[i] != 'B'){
				if('A' <= arr[i] && arr[i] <= 'Z'){
					up.pb(i);
				}
				else{
					low.pb(i);
				}
			}
			else{
				if(arr[i] == 'b' && low.size() > 0){
					low.pop_back();
				}
				else if(arr[i] == 'B' && up.size() > 0){
					up.pop_back();
				}
			}
		}
		vl u;
		ff(i, 0, up.size()){
			u.pb(up[i]);
		}
		ff(i, 0, low.size()){
			u.pb(low[i]);
		}
		sort(all(u));
		ff(i, 0, u.size()){
			cout << arr[u[i]];
		}
		cout << ed;
	}
}
