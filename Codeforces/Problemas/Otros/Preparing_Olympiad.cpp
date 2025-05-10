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

ll n, l, r, x, c = 0;
vl arr;

void backt(ll minn, ll maxx, ll suma, ll p){
	if(p == n){
		cout << ed;
		if(maxx-minn >= x && l <= suma && suma <= r){
			//cout << minn << " " << maxx << " " << suma << ed << ed;
			c++;
		}
		return;
	}
	backt(minn, maxx, suma, p+1);
	ll cmin = min(minn, arr[p]);
	ll cmax = max(maxx, arr[p]);
	ll csuma = suma+arr[p];
	backt(cmin, cmax, csuma, p+1);
}

int main(){
	cin >> n >> l >> r >> x;
	arr = vl(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	backt(LLONG_MAX, 0, 0, 0);
	cout << c;
	
}
