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

int main(){
	ll a, b, c;
	cin >> a >> b >> c;
	long double x = sqrt((double)a*c/b), y = sqrt((double)a*b/c), z = sqrt((double)b*c/a);
	cout << 4 * (x+y+z);
	
	return 0;
}
