#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
ll MOD = 998224353;


int main(){
	ll n;
	cin >> n;
	vector<pll> arr(n);
	ff(i, 0, n){
		cin >> arr[i].fi >> arr[i].se;
	}
	ll b = -1;
	sort(all(arr));
	ff(i, 0, n){
		if(b <= arr[i].se){
			b = arr[i].se;
		}
		else{
			b = arr[i].fi;
		}
	}
	cout << b;
	
	
	return 0;
}

