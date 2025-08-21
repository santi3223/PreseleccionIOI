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
		ll n, k;
		cin >> n >> k;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll maxx = LLONG_MIN;
		ll l = max(0LL, n-2*k-1);
		ff(i, l, n){
			ff(j, i+1, n){
				maxx = max(maxx, (i+1)*(j+1)-k*(arr[i] | arr[j]));
			}
		}
		cout << maxx << ed;
	}
}
