#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;
 
int main() {
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll px, py, qx, qy;
		cin >> px >> py >> qx >> qy;
		vl arr(n);
		ll sum = 0, maxx = 0;
		ff(i, 0, n){
			cin >> arr[i];
			sum += arr[i];
			maxx = max(maxx, arr[i]);
		}
		ll dx = qx-px, dy = qy-py;
		ll dist = dx*dx+dy*dy;
		ll mindist = max(0LL, 2*maxx-sum);
		if(mindist*mindist <= dist && dist <= sum*sum){
			cout << "Yes" << ed;
		}
		else{
			cout << "No" << ed;
		}
	}
}
