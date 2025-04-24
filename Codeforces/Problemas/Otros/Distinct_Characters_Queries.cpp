#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second
ll MOD = 1e9+7;

string arr;
vector<bitset<26>> t;
unordered_map<char, ll> univ;
void build(ll i, ll l, ll r){
	if(l == r){
		t[i].reset();
		t[i].set(arr[l]-'a');
		return;
	}
	ll mid = (l+r)/2;
	build(2*i+1, l, mid);
	build(2*i+2, mid+1, r);
	t[i] = t[2*i+1]|t[2*i+2];
	
}

void upd(ll i, ll l, ll r, ll id, char val){
	if(l == r){
		arr[id] = val;
		t[i].reset();
		t[i].set(val-'a');
		return;
	}
	ll mid = (l+r)/2;
	if(id <= mid){
		upd(2*i+1, l, mid, id, val);
	}
	else{
		upd(2*i+2, mid+1, r, id, val);
	}
	t[i] = t[2*i+1]|t[2*i+2];
}

bitset<26> query(ll i, ll tl, ll tr, ll l, ll r){
	if(tr < l || tl > r){
		return bitset<26>();
	}
	if(l <= tl && tr <= r){
		return t[i];
	}
	ll mid = (tl+tr)/2;
	return query(2*i+1, tl, mid, l, r) | query(2*i+2, mid+1, tr, l, r);
}

int main(){
	cin >> arr;
	ll n = arr.size();
	t.resize(4*n);
	build(0, 0, n-1);
	ll q;
	cin >> q;
	while(q--){
		ll o;
		cin >> o;
		if(o == 2){
			ll l, r;
			cin >> l >> r;
			l--;
			r--;
			univ.clear();
			bitset<26> res = query(0, 0, n-1, l, r);
			cout << res.count() << ed;
		}
		else{
			ll a;
			char x;
			cin >> a >> x;
			upd(0, 0, n-1, a-1, x);
		}
	}
	
	
	return 0;
}
