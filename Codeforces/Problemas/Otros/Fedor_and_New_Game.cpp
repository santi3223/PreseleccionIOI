#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(int aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll n, m, k;
	cin >> n >> m >> k;
	vl arr(m+1);
	ff(i, 0, m+1){
		cin >> arr[i];
	}
	ll c = 0;
	ff(i, 0, m){
		ll x = arr[m]^arr[i];
		if(__builtin_popcount(x) <= k){
			c++;
		}
	}
	cout << c;
}
