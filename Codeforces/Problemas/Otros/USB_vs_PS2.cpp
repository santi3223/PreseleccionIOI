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

int main(){
	ll a, b, c;
	cin >> a >> b >> c;
	ll n;
	cin >> n;
	vl usb, ps;
	ff(i, 0, n){
		ll x;
		string str;
		cin >> x >> str;
		if(str == "USB"){
			usb.pb(x);
		}
		else{
			ps.pb(x);
		}
	}
	sort(all(usb));
	sort(all(ps));
	ll q = 0;
	ll szu = usb.size(), szp = ps.size();
	ll i = min(a, szu), j = min(b, szp);
	q += i+j;
	ll ans = 0;
	ff(o, 0, i){
		ans += usb[o];
	}
	ff(o, 0, j){
		ans += ps[o];
	}
	vl ar1(usb.begin()+i, usb.end()), ar2(ps.begin()+j, ps.end());
	if(ar1.size() < ar2.size()){
		swap(ar1, ar2);
	}
	ff(o, 0, ar2.size()){
		ar1.pb(ar2[o]);
	}
	sort(all(ar1));
	ll last = min(c, (ll)ar1.size());
	q += last;
	ff(o, 0, last){
		ans += ar1[o];
	}
	cout << q << " " << ans;
	
}
