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
	ll t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		vl pos;
		pos.pb(0);
		ll n = str.size();
		ff(i, 0, n){
			if(str[i] == 'R'){
				pos.pb(i+1);
			}
		}
		pos.pb(n+1);
		ll maxx = 0;
		ff(i, 0, pos.size()-1){
			maxx = max(maxx, pos[i+1]-pos[i]);
		}
		cout << maxx << ed;
	}
	
	return 0;
}
