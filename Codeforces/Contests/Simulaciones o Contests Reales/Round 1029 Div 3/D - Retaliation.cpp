#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		unordered_set<ll> st;
		ff(i, 0, n){
			cin >> arr[i];
			st.insert(arr[i]);
		}
		ll dif = arr[1]-arr[0];
		bool ok = true;
		ff(i, 1, n){
			if(arr[i]-arr[i-1] != dif){
				ok = false;
			}
		}
		if(!ok){
			cout << "NO" << ed;
			continue;
		}
		ll a = arr[0]-dif, b = n+1;
		if(a < 0 || a%b != 0){
			ok = false;
		}
		ll div = a/b, sum = dif+div;
		if(!ok || div < 0 || sum < 0){
			cout << "NO" << ed;
		}
		else{
			cout << "YES" << ed;
		}
		
	}
}
