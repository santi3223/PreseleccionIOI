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
	ll x, a, d, n;
	cin >> x >> a >> d >> n;
	if(d < 0){
		a = a+d*(n-1);
		d = -d;
	}
	ll l = 0, r = n-1, minn = LLONG_MIN;
	while(l <= r){
		ll mid = l + (r-l)/2;
		if(mid*d +a <= x){
			minn = mid*d+a;
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	l = 0, r = n-1;
	ll maxx = LLONG_MAX;
	while(l <= r){
		ll mid = l + (r-l)/2;
		if(mid*d+a >= x){
			maxx = mid*d+a;
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	cout << min(abs(x-minn),abs(x-maxx));
	
	
    return 0;
}
