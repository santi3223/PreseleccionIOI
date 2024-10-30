#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	IO
	string s;
	cin >> s;
	ll n = s.size();
	vl arr(n, 0);
	ff(i, 1, n){
		arr[i] = arr[i-1];
		if(s[i] == s[i-1]){
			arr[i]++;
		}
	}
	ll q;
	cin >> q;
	while(q--){
		ll l, r;
		cin >> l >> r;
		l--; r--;
		cout << arr[r]-arr[l] << ed;
	}
	
	return 0;
}
