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
	vector<pll> arr(n);
	ff(i, 0, n){
		cin >> arr[i].fi >> arr[i].se;
	}
	sort(all(arr));
	bool nw = true;
	ll minn = 0, maxx = 0;
	ff(i, 0, n){
		if(nw){
			minn = arr[i].fi;
			maxx = arr[i].se;
			nw = false;
		}
		else{
			if(maxx >= arr[i].fi){
				maxx = max(maxx, arr[i].se);
			}
			else{
				cout << minn << " " << maxx << ed;
				minn = arr[i].fi;
				maxx = arr[i].se;
			}
		}
	}
	cout << minn << " " << maxx << ed;
	
	return 0;
}