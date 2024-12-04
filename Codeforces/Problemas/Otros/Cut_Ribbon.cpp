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
	ll n, x, y, z;
	cin >> n >> x >> y >> z;
	ll maxx = 0;
	ff(i, 0, n/x+1){
		ff(j, 0, (n-x*i)/y+1){
			ll nx = x*i, ny = y*j, nn = n - nx-ny;
			if(nn % z == 0){
				ll k = nn/z;
				maxx = max(maxx, i+j+k);
			}
		}
	}
	cout << maxx;
	return 0;
}
