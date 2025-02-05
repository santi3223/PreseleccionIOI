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
		unordered_map<ll, bool> memo;
		ull x, y;
		cin >> x >> y;
		bool ok = false;
		if(x >= y){
			cout << "YES" << ed;
			continue;
		}
		while(memo[x] != true){
			if(x >= y){
				ok = true;
				break;
			}
			if(x == 1){
				break;
			}
			memo[x] = true;
			if(x % 2){
				x--;
			}
			else{
				x *= 3;
				x /= 2;
			}
		}
		
		if(ok){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << ed;
	}
	
	return 0;
}
