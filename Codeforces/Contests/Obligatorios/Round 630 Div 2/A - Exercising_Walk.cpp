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
	ll t;
	cin >> t;
	while(t--){
    	ll a, b, c, d, x, y, x1, x2, y1, y2;
    	cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
    	bool ok = true;
    	bool lr = false, ud = false;
    	if(a > 0 && b > 0){
    	    lr = true;
    	}
    	if(c > 0 && d > 0){
    	    ud = true;
    	}
    	if(x2-x1+1 == 1 && lr){
    	    ok = false;
    	}
    	if(y2-y1+1 == 1 && ud){
    	    ok = false;
    	}
    	ll xa = a, xb = b, xc = c, xd = d;
    	a -= min(xa, xb);
    	b -= min(xa, xb);
    	c -= min(xc, xd);
    	d -= min(xc, xd);
    	if(a > 0){
    	    if(x1 > x-a){
    	        ok = false;
    	    }
    	}
    	if(b > 0){
    	    if(x2 < x+b){
    	        ok = false;
    	    }
    	}
    	if(c > 0){
    	    if(y1 > y-c){
    	        ok = false;
    	    }
    	}
    	if(d > 0){
    	    if(y2 < y+d){
    	        ok = false;
    	    }
    	}
    	
    	if(ok){
    	    cout << "Yes" << ed;
    	}
    	else{
    	    cout << "No" << ed;
    	}
	}
	
	return 0;
}
