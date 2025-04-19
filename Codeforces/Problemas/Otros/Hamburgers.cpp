#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
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

int main(){
	string str;
	cin >> str;
	ll qb = 0, qs = 0, qc = 0;
	ff(i, 0, str.size()){
		if(str[i] == 'B'){
			qb++;
		}
		else if(str[i] == 'S'){
			qs++;
		}
		else{
			qc++;
		}
	}
	ll nb, ns, nc, pb, ps, pc, plata;
	cin >> nb >> ns >> nc >> pb >> ps >> pc >> plata;
	ll l = 0, r = 1e13;
	ll ans = 0;
	while(l <= r){
		ll mid = l + (r-l)/2;
		ll a = max(0LL, qb*mid-nb)*pb;
		ll b = max(0LL, qs*mid-ns)*ps;
		ll c = max(0LL, qc*mid-nc)*pc;
		if(a+b+c <= plata){
			ans = mid;
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	cout << ans << ed;
	return 0;
}
