#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define vs vector<string>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

vl t, gt, arr;


void build(ll i, ll l, ll r){
    if(l == r){
        t[i] = gt[i] = arr[l];
        return;
    }
    ll mid = (l+r)/2;
    build(2*i+1, l, mid);
    build(2*i+2, mid+1, r);
    t[i] = min(t[2*i+1], t[2*i+2]);
    gt[i] = gcd(gt[2*i+1], gt[2*i+2]);
}

ll query(ll i, ll tl, ll tr, ll l, ll r){
    if(tr < l || r < tl){
        return INT_MAX;
    }
    if(tl >= l && tr <= r){
        return t[i];
    }
    ll mid = (tl+tr)/2;
    return min(query(2*i+1, tl, mid, l, r), query(2*i+2, mid+1, tr, l, r));
    
}

ll gquery(ll i, ll tl, ll tr, ll l, ll r){
    if(tr < l || r < tl){
        return 0;
    }
    if(tl >= l && tr <= r){
        return gt[i];
    }
    ll mid = (tl+tr)/2;
    return gcd(gquery(2*i+1, tl, mid, l, r), gquery(2*i+2, mid+1, tr, l, r));
    
}

int main(){
	ll n;
	cin >> n;
	arr = vl(n);
	t = vl(4*n);
	gt = vl(4*n);
	map<ll, vl> pos;
	ff(i, 0, n){
	    cin >> arr[i];
	    pos[arr[i]].pb(i);
	}
	build(0, 0, n-1);
	ll q;
	cin >> q;
	while(q--){
	    ll l, r;
	    cin >> l >> r;
	    l--;
	    r--;
	    ll mm = query(0, 0, n-1, l, r);
	    ll gcdd = gquery(0, 0, n-1, l, r);
	    if(gcdd != mm){
	        cout << r-l+1;
	    }
	    else{
	        auto &p = pos[gcdd];
	        ll c = upper_bound(all(p), r) - lower_bound(all(p), l);
	        cout << r-l+1-c;
	    }
	    cout << ed;
	    
	}
	
	
	return 0;
}
