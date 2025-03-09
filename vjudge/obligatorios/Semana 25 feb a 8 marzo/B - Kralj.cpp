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
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll n;
	cin >> n;
	vl arr(n), p(n), v(n);
	ff(i, 0, n){
		cin >> arr[i];
		arr[i]--;
	}
	ff(i, 0, n){
		cin >> p[i];
	}
	ff(i, 0, n){
		cin >> v[i];
	}
	sort(all(p));
	set<ll> elves(all(v));
	ll c = 0;
	for(ll s : p){
		auto it = elves.upper_bound(s);
		if(it != elves.end()){
			c++;
			elves.erase(it);
		}
	}
	cout << c;
	
	return 0;
}
