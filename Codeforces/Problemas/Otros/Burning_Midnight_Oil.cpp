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

ll n, k;

ll check(ll v){
	ll kk = k, counter = 0;
	while(v/kk > 0){
		counter += v/kk;
		kk *= k;
	}
	return counter;
}

int main(){
	cin >> n >> k;
	ll minn = LLONG_MAX;
	ll l = 1, r = 1e10;
	while(l <= r){
		ll mid = (l+r)/2;
		ll val = mid+check(mid);
		if(val < n){
			l = mid+1;
		}
		else{
			minn = mid;
			r = mid-1;
		}
	}
	cout << minn;
	
	return 0;
}
