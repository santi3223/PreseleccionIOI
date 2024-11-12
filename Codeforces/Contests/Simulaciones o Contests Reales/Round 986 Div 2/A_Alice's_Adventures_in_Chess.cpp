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

bool ok(ll n, ll a, ll b, string str){
	ll x = 0, y = 0;
	set<pll> vis;
	vis.insert({x, y});
	ff(i, 0, n){
		char c = str[i];
		if(c == 'N'){
			y++;
		}
		else if(c == 'S'){
			y--;
		}
		else if(c== 'E'){
			x++;
		}
		else if(c == 'W'){
			x--;
		}
		if(x == a && y == b){
			return true;
		}
		vis.insert({x, y});
	}
	if(x == 0 && y == 0){
		return vis.count({a, b}) > 0;
	}
	x = 0; 
	y = 0;
	ff(i, 0, n*10){
		if(x == a && y == b){
			return true;
		}
			ff(i, 0, n){
				char c = str[i];
				if(c == 'N'){
					y++;
				}
				else if(c == 'S'){
					y--;
				}
				else if(c== 'E'){
					x++;
				}
				else if(c == 'W'){
					x--;
				}
				if(x == a && y == b){
					return true;
				}
			}
	}
	return false;
	
}

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, a, b;
		cin >> n >> a >> b;
		string str;
		cin >> str;
		if(ok(n, a, b, str)){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << ed;
	}
	
}
