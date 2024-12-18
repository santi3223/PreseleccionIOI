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
ll MOD = 1e9+7;

int main(){
	IO
	ll n, k;
	cin >> n >> k;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	vector<vl> groups(k);
	ff(i, 0, n){
		groups[i%k].pb(arr[i]);
	}
	ff(i, 0, k){
		sort(all(groups[i]));
	}
	vl brr(n);
	ff(i, 0, n){
		brr[i] = groups[i%k][i/k];
	}
	vl sorted = brr;
	sort(all(sorted));
	ff(i, 0, n){
		if(brr[i] != sorted[i]){
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}
