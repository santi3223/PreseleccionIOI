#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()	
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second
ll MOD = 1e9+7;

int main(){
	ll n;
	cin >> n;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	ll c = 1;
	vl ri(n, 1);
	for(ll i = n-2; i >= 0; i--){
		if(arr[i+1] > arr[i]){
			ri[i] = ri[i+1]+1;
		}
		c = max(c, ri[i]);
	}
	vl le(n, 1);
	ff(i, 1, n){
		if(arr[i-1] < arr[i]){
			le[i] = le[i-1]+1;
		}
		c = max(c, le[i]);
	}
	ff(i, 0, n-2){
		if(arr[i] < arr[i+2]){
			c = max(c, le[i]+ri[i+2]);
		}
	}
	cout << c;
	
	return 0;
}
