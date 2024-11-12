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
	ll r, x, y, xx, yy;
	cin >> r >> x >> y >> xx >> yy;
	long double d = ceil((long double)sqrt((xx-x)*(xx-x)+(yy-y)*(yy-y)));
	if(d == 0){
		cout << 0;
		return 0;
	}
	cout << ceil(d/(2*r));
	
}
