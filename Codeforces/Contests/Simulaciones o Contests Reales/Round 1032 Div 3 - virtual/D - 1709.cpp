#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back
#define pll pair<ll, ll>
#define fi first
#define se second

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back
#define pll pair<ll, ll>
#define fi first
#define se second

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
		vector<pll> op;
		ff(i, 0, n){
			ff(j, 0, n-1){
				if(arr[j] > arr[j+1]){
					swap(arr[j], arr[j+1]);
					op.pb({1, j});
				}
			}
		}
		ff(i, 0, n){
			ff(j, 0, n-1){
				if(brr[j] > brr[j+1]){
					swap(brr[j], brr[j+1]);
					op.pb({2, j});
				}
			}
		}
		ff(i, 0, n){
			if(arr[i]>brr[i]){
				swap(arr[i], brr[i]);
				op.pb({3, i});
			}
		}
		cout << op.size() << ed;
		ff(i, 0, op.size()){
			cout << op[i].fi << " " << op[i].se+1 << ed;
		}
		/*cout << op.size() << ed;
		ff(i, 0, n){
			cout << arr[i] << " ";
		}
		cout << ed;
		ff(i, 0, n){
			cout << brr[i] << " ";
		}*/
		
	}

  return 0;
}
