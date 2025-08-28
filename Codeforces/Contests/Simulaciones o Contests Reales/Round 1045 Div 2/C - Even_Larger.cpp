#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
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
		ll c = 0;
		ff(i, 1, n){
			if(i % 2 != 0){ //par
				if(arr[i-1] > arr[i]){
					ll diff = arr[i-1]-arr[i];
					arr[i-1] = arr[i];
					c += diff;
				}
			}
			else{
				if(arr[i-1] < arr[i]){ //impar
					ll diff = arr[i]-arr[i-1];
					arr[i] = arr[i-1];
					c += diff;
				}
			}
		}
		/*cout << "Op 1" << ed;
		ff(i, 0, n){
			cout << arr[i] << " ";
		}
		cout << ed;*/
		ff(i, 2, n){
			if(i % 2 == 0){
				if(arr[i-2]+arr[i] > arr[i-1]){
					ll diff = arr[i-2]+arr[i]-arr[i-1];
					c += diff;
					arr[i] -= diff;
				}
			}
		}
		/*cout << "Op 2" << ed;
		ff(i, 0, n){
			cout << arr[i] << " ";
		}
		cout << ed;*/
		cout << c << ed;
	}
}
