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
	ll x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if(x1 != x2 && y1 != y2 && abs(x1-x2) != abs(y1-y2)){
		cout << -1;
		return 0;
	}
	if(x1 == x2){
		cout << x1+abs(y1-y2) << " " << y1 << " " << x2+abs(y1-y2) << " " << y2;
	}
	else if(y1 == y2){
		cout << x1 << " " << y1+abs(x1-x2) << " " << x2 << " " << y2+abs(x1-x2);
	}
	else{
		cout << x1 << " " << y2 << " " << x2 << " " << y1;
	}
	return 0;
}
