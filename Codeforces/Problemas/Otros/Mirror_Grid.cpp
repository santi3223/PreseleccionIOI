#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<vl> arr(n, vl(n));
		ff(i, 0, n){
			string s;
			cin >> s;
			ff(j, 0, n){
				arr[i][j] = s[j]-'0';
			}
		}
		ll q = n, ans = 0;
		ll x1 = 0, y1 = 0, x2 = n-1, y2 = 0;
		ll x3 = 0, y3 = n-1, x4 = n-1, y4 = n-1;
		while(q > 1){
			ll cant = q-1;
			ll a = x1, b = y1, c = x2, d = y2, e = x3, f = y3, g = x4, h = y4;
			while(cant--){
				ll ac = 0;
				ac = arr[x1][y1]+arr[x2][y2]+arr[x3][y3]+arr[x4][y4];
				ans += min(ac, 4-ac);
				x1++;
				y2++;
				y3--;
				x4--;				
			}
			x1 = a+1;
			y1 = b+1;
			x2 = c-1;
			y2 = d+1;
			x3 = e+1;
			y3 = f-1;
			x4 = g-1;
			y4 = h-1;
			q -= 2;
		}
		cout << ans << ed;
	}

}
