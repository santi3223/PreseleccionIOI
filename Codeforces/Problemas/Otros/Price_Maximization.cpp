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
		ll c = 0;
		ff(i, 0, n){
			cin >> arr[i];
			c += arr[i]/k;
			arr[i] %= k;
		}
		sort(rall(arr));
		for(ll i = 0, j = n-1; i < j; i++, j--){
			while(arr[i] + arr[j] < k && i < j){
				j--;
			}
			if(i == j){
				break;
			}
			c++;
		}
		cout << c << ed;
	}
}
