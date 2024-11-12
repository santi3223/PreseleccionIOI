#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ll c1 = 0, c2 = 0, n1 = 0, n2 = 0;
		ll lpos1 = 0, lpos2 = 0;
		ff(i, 0, n){
			cin >> arr[i];
			if(i == 0){
				n1 = arr[i];
			}
			if(arr[i] != n1){
				n2 = arr[i];
			}
			if(arr[i] == n1){
				c1++;
				lpos1 = i;
			}
			else{
				c2++;
				lpos2 = i;
			}
		}
		if(c1 > c2){
			cout << lpos2+1;
		}
		else{
			cout << lpos1+1;
		}
		cout << ed;
	}
	
	return 0;
}
