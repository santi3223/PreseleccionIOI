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

vl t, arr;

ll binexp(ll b, ll e){
    if(e == 0){
        return 1;
    }
    if(e == 1){
        return b;
    }
    ll mid = binexp(b, e/2);
    if(e % 2 != 0){
        return mid*mid*b;
    }
    return mid*mid;
}

void build(ll i, ll l, ll r, bool q){
    if(l == r){
        t[i] = arr[l];
        return;
    }
    ll mid = (l+r)/2;
    build(2*i+1, l, mid, !q);
    build(2*i+2, mid+1, r, !q);
    if(q){
        t[i] = t[2*i+1] | t[2*i+2];
    }
    else{
        t[i] = t[2*i+1] ^ t[2*i+2];
    }
}

void upd(ll i, ll l, ll r, ll id, ll val, bool q){
    if(l == r){
        t[i] = val;
        return;
    }
    ll mid = (l+r)/2;
    if(id <= mid){
        upd(2*i+1, l, mid, id, val, !q);
    }
    else{
        upd(2*i+2, mid+1, r, id, val, !q);
    }
    
    if(q){
        t[i] = t[2*i+1] | t[2*i+2];
    }
    else{
        t[i] = t[2*i+1] ^ t[2*i+2];
    }
    
}

int main(){
	ll n, q;
	cin >> n >> q;
	ll original = n;
	n = (1 << n);
	arr = vl(n);
	t = vl(4*n);
	ff(i, 0, n){
	    cin >> arr[i];
	}
	bool st = false;
	if(original % 2 != 0){
	    st = true;
	}
	build(0, 0, n-1, st);
	while(q--){
	    ll p, b;
	    cin >> p >> b;
	    p--;
	    upd(0, 0, n-1, p, b, st);
	    cout << t[0] << ed;
	}
	
	
	return 0;
}
//chequeando tiempo
