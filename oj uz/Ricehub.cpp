#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define ed "\n"
 
int besthub(int r, int l, int x[], ll b){
	vl psum(r+1, 0);
	ff(i, 0, r){
		psum[i+1] = psum[i]+x[i];
	}
	ll ri = 0, c = 0;
	ff(le, 0, r){
		while(ri < r){
			ll mid = (le+ri+1)/2;
			ll q = 0;
			if((le+ri+1) % 2 != 0){
				q -= x[mid];
			}
			q -= psum[mid]-psum[le];
			q += psum[ri+1] - psum[mid];
			if(q > b){
				break;
			}
			ri++;
		}
		c = max(c, ri-le);
		if(ri == r){
			break;
		}
	}
	return c;
}
 
//cambio de valores
