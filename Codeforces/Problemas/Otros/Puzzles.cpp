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

int main() {
	IO
	ll n, m;
	cin >> n >> m;
	vl arr(m);
	ff(i, 0, m){
		cin >> arr[i];
	}
	sort(all(arr));
	ll minn = LLONG_MAX;
	ff(i, 0, m-n+1){
		minn = min(minn, arr[i+n-1]-arr[i]);
	}
	cout << minn;
	return 0;
}
