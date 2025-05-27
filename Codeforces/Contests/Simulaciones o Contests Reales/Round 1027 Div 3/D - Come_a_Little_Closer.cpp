#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
ll MOD = 1e9+7;

vl x, y;
ll n;
pll xmin, xmax, ymin, ymax;
ll up, der;
ll calc(pll excluded){
	ll curx = excluded.se;
	ll cury = excluded.fi;
	ll xmaxx = x[n-1], xminn = x[0], ymaxx = y[n-1], yminn = y[0];
	//cout << "Start  " << xminn << " " << xmaxx << "  " << yminn << " " << ymaxx << ed;
	if(cury == ymaxx){
		ymaxx = y[n-2];
	}
	if(cury == yminn){
		yminn = y[1];
	}
	if(curx == xmaxx){
		xmaxx = x[n-2];
	}
	if(curx == xminn){
		xminn = x[1];
	}
	//cout << xminn << " " << xmaxx << "  " << yminn << " " << ymaxx << ed;
	up = ymaxx-yminn+1, der = xmaxx-xminn+1;
	return up*der;
	
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		x.clear();
		y.clear();
		cin >> n;
		vector<pll> arr(n);
		ff(i, 0, n){
			ll cy, cx;
			cin >> cy >> cx;
			x.pb(cx);
			y.pb(cy);
			if(i == 0){
				ymax = {cy, cx};
				ymin = {cy, cx};
				xmax = {cy, cx};
				xmin = {cy, cx};
				continue;
			}
			if(cy > ymax.fi){
				ymax = {cy, cx};
			}
			if(cy < ymin.fi){
				ymin = {cy, cx};
			}
			if(cx > xmax.se){
				xmax = {cy, cx};
			}
			if(cx < xmin.se){
				xmin = {cy, cx};
			}
		}
		sort(all(x));
		sort(all(y));
		if(n == 1){
			cout << 1 << ed;
			continue;
		}
		ll minn = LLONG_MAX;
		ll q = calc(xmax);
		if(q == n-1){
			q += min(up, der);
		}
		minn = min(minn, q);
		q = calc(xmin);
		if(q == n-1){
			q += min(up, der);
		}
		minn = min(minn, q);
		q = calc(ymin);
		if(q == n-1){
			q += min(up, der);
		}
		minn = min(minn, q);
		q = calc(ymax);
		if(q == n-1){
			q += min(up, der);
		}
		minn = min(minn, q);
		
		cout << minn << ed;
	}
	
}

