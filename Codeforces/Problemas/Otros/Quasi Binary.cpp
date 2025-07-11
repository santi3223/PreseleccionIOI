#include <bits/stdc++.h>
//#include "bitstrings.h"
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back

int main(){
    ll n;
    cin >> n;
    vl x;
    while(n > 0){
        ll m = 0, p = 1, t = n;
        while (t > 0) {
            if (t % 10 != 0) m += p;
            t /= 10;
            p *= 10;
        }
        x.pb(m);
        n -= m;
    }
    cout << x.size() << ed;
    ff(ii, 0, x.size()){
		cout << x[ii] << " ";
	}
}
