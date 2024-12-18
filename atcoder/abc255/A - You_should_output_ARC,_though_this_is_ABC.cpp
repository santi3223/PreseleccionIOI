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
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll r, c;
	cin >> r >> c;
	r--;
	c--;
	vector<vl> a(2, vl(2));
	ff(i, 0, 2){
		ff(j, 0, 2){
			ll x;
			cin >> x;
			if(i == r && c == j){
				cout << x;
				return 0;
			}
		}
	}
	
    return 0;
}
