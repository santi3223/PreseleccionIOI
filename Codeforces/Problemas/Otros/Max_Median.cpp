#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back

int main(){
	ll n, k;
	cin >> n >> k;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	ll l = 1, r = n+1, ans = 0;
	while(r-l > 1){
		//cout << l << " " << r << ed;
		ll mid = (l+r)/2;
		vl b(n, -1);
		ff(i, 0, n){
			if(arr[i] >= mid){
				b[i] = 1;
			}
		}
		vl pref = b;
		ff(i, 1, n){
			pref[i] += pref[i-1];
		}
		ll minn = 0, maxx = pref[k-1];
		ff(i, k, n){
			minn = min(minn, pref[i-k]);
			maxx = max(maxx, pref[i]-minn);
		}
		if(maxx > 0){
			l = mid;
		}
		else{
			r = mid;
		}
	}
	cout << l << ed;
}

