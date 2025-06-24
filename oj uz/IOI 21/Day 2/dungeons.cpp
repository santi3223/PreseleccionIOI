#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

vl s, p, w, l;

void init(int n, vector<int> ss, vector<int> pp, vector<int> ww, vector<int> lll){
	ff(i, 0, n){
		s.pb(ss[i]);
	}
	ff(i, 0, n){
		p.pb(pp[i]);
	}
	ff(i, 0, n){
		w.pb(ww[i]);
	}
	ff(i, 0, n){
		l.pb(lll[i]);
	}
}

ll simulate(int x, int z){
	ll n = s.size();
	while(x != n){
		//cout << x << " " << z << " ";
		if(z >= s[x]){
			//cout << "W" << ed;
			z += s[x];
			x = w[x];
		}
		else{
			//cout << "L" << ed;
			z += p[x];
			x = l[x];
		}
	}
	return z;
}

/*
int main(){
	int n, q;
	cin >> n >> q;
	vector<int> ss, pp, ww, lll;
	ff(i, 0, n){
		ll a;
		cin >> a;
		ss.pb(a);
	}
	ff(i, 0, n){
		ll a;
		cin >> a;
		pp.pb(a);
	}
	ff(i, 0, n){
		ll a;
		cin >> a;
		ww.pb(a);
	}
	ff(i, 0, n){
		ll a;
		cin >> a;
		lll.pb(a);
	}
	init(n, ss, pp, ww, lll);
	while(q--){
		ll a, b;
		cin >> a >> b;
		cout << simulate(a, b) << ed << ed;
	}
	
}

*/
