#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll N = 1e12;
unordered_set<ll> cubes;

int main(){
	IO
	for(ll i = 1; i*i*i <= N; i++){
		cubes.insert(i*i*i);
	}
	ll t;
	cin >> t;
	while(t--){
		ll x;
		cin >> x;
		bool gg = false;
		for(ll i = 1; i*i*i <= x; i++){
			if(cubes.count(x-i*i*i)){
				gg = true;
				break;
			}
		}
		if(gg){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << ed;
	}
	
	return 0;
}
