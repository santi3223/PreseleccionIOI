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
	ll n, k;
	cin >> n >> k;
	vl arr(n);
	map<ll, ll> counts;
	ff(i, 0, n){
		cin >> arr[i];
		counts[arr[i]]++;
	}
	sort(all(arr));
	if(k == 0 && arr[0] > 1){
		cout << 1;
		return 0;
	}
	ll p = arr[k-1];
	ll pos = upper_bound(all(arr), p) - arr.begin();
	if(arr[pos-1] != p || pos-1 != k-1){
		cout << -1;
	}
	else{
		cout << p;
	}
	return 0;
}
