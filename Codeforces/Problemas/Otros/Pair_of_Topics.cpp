#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll n;
	cin >> n;
	vl a(n);
	ff(i, 0, n){
		cin >> a[i];
	}
	vl arr(n);
	ff(i, 0, n){
		ll x;
		cin >> x;
		arr[i] = a[i]-x;
	}
	sort(all(arr));
	ll c = 0;
	ff(i, 0, n){
		if(arr[i] <= 0){
			continue;
		}
		ll x = lower_bound(all(arr), -arr[i]+1) -arr.begin();
		c += i-x;
	}
	cout << c;
	
	return 0;
}
