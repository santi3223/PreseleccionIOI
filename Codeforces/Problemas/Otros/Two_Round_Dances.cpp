#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

int main(){
	ll n;
	cin >> n;
	vl f(25);
	f[0] = 1;
	ff(i, 1, 22){
		f[i] = f[i-1]*i;
	}
	ll c = f[n]/f[n/2]/f[n/2];
	c *= f[n/2-1]*f[n/2-1];
	c /= 2;
	cout << c;
}
