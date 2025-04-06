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
ll n;
vl t, freq;

void update(ll i, ll tl, ll tr, ll l, ll r){
	if(tr < l || tl > r) return;
	if(tl >= l && tr <= r){
		t[i]++;
		return;
	}
	ll mid = (tl+tr)/2;
	update(2*i+1, tl, mid, l, r);
	update(2*i+2, mid+1, tr, l, r);
}

void fin(ll i, ll tl, ll tr){
	if(tl == tr){
		freq[tl] = t[i];
		return;
	}
	t[2*i+1] += t[i];
	t[2*i+2] += t[i];
	t[i] = 0;
	ll mid = (tl+tr)/2;
	fin(2*i+1, tl, mid);
	fin(2*i+2, mid+1, tr);
}

int main(){
	ll q;
	cin >> n >> q;
	vl arr(n);
	t = vl(4*n, 0);
	freq = vl(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	while(q--){
		ll l, r;
		cin >> l >> r;
		l--;
		r--;
		
		update(0, 0, n-1, l, r);
	}
	fin(0, 0, n-1);
	sort(all(arr));
	sort(all(freq));
	ll c = 0;
	ff(i, 0, n){
		c += freq[i]*arr[i];
	}
	cout << c;
		

	return 0;
}
