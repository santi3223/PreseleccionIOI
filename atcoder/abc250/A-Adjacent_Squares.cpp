#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
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
	ll h, w;
	cin >> h >> w;
	ll a, b;
	cin >> a >> b;
	ll c = 0;
	if(a+1 <= h){
		c++;
	}
	if(a-1 > 0){
		c++;
	}
	if(b+1 <= w){
		c++;
	}
	if(b-1 > 0){
		c++;
	}
	cout << c;
	
	return 0;
}
