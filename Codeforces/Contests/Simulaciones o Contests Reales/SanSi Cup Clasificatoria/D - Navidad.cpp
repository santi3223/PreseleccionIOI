#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;
vl weight;

bool ok(ll k, ll cap){
	ll bags = 1;
	ll cur = 0;
	for(ll w : weight){
		if(cur + w > cap){
			bags++;
			cur = w;
			if(bags > k){
				return false;
			}
		}
		else{
			cur += w;
		}
	}
	return true;
}

int main(){
	IO
	ll n, k;
	cin >> n;
	weight.resize(n);
	ll l = 0, r = 0;
	ff(i, 0, n){
		cin >> weight[i];
		l = max(l, weight[i]);
		r += weight[i];
	}
	cin >> k;
	ll res = r;
	while(l <= r){
		ll mid = l + (r-l)/2;
		if(ok(k, mid)){
			res = mid;
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	cout << res;
	return 0;
}
 
