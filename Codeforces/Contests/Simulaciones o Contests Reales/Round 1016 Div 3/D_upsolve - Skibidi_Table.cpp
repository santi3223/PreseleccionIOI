#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

vl pot(65);
void build(){
	pot[0] = 1;
	ff(i, 1, 61){
		pot[i] = pot[i-1]*2;
	}
}
 
ll q1(ll n, ll x, ll y){
	//cout << n << " " << x << " " << y << ed;
	ll a = x, b = y;
	bool xiz = true, yar = true;
	ll mid = pot[n-1];
	//cout << "M " << mid << ed;
	if(x > mid){
		xiz = false;
	}
	if(y > mid){
		yar = false;
	}
	if(!xiz){
		a -= mid;
	}
	if(!yar){
		b -= mid;
	}
	ll val = 3;
	if(xiz && yar){
		val = 0;
	}
	if(!xiz && !yar){
		val = 1;
	}
	if(!xiz && yar){
		val = 2;
	}
	
	if(n == 1){
		//cout << "P ";
		return val+1;
	}
	return val*pot[2*n-2]+q1(n-1, a, b);
}

pll xx;
void q2(ll n, ll val){
	ff(i, 1, 5){
		if(val <= pot[2*n-2]*i){
			ll q = pot[n-1];
			if(i == 2){
				xx.fi += q;
				xx.se += q;
			}
			if(i == 3){
				xx.fi += q;
			}
			if(i == 4){
				xx.se += q;
			}
			q2(n-1, val-(i-1)*pot[2*n-2]);
			break;
		}
	}
	
}
 
 
int main(){
	build();
	ll t;
	cin >> t;
	while(t--){
		ll n, q;
		cin >> n >> q;
		//cout << up << ed;
		while(q--){
			string a;
			cin >> a;
			if(a == "->"){
				ll x, y;
				cin >> x >> y;
				cout << q1(n, x, y) << ed;
			}
			else{
				ll p;
				cin >> p;
				xx = {0, 0};
				q2(n, p);
				cout << xx.fi+1 << " " << xx.se+1 << ed;
			}
		}
	}	
		
 
	return 0;
}
