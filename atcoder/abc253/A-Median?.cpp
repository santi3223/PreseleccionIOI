#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	IO
	ll a, b, c;
	cin >> a >> b >> c;
	vl x = {a, b, c};
	sort(all(x));
	if(b == x[1]){
		cout << "Yes";
		return 0;
	}
	cout << "No";
}
